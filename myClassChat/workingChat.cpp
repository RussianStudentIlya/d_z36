#include "workingChat.h"

workingChat::workingChat(mySQL_db &dbConnect, char &mode) : _dbConnect(dbConnect), _mode(mode)
{
    _dbConnect.connect_DB(_dbConnect.get_dbName());

    if (_dbConnect.getConnectStatus() != true)
    {
        _dbConnect.create_DB(_dbConnect.get_dbName());
    }
}

void workingChat::startChat()
{
    if(_dbConnect.getConnectStatus())
    {
        //ui->statusConnectLabel->setText("Connected to " + QString::fromStdString(_dbConnect.get_dbName()));
        tables[0] = new db_Table_Client(_dbConnect.getConnectStatus(), _dbConnect, _mode); // Создание таблицы clients исли она не существуют

        tables[1] = new db_Table_hPassword(_dbConnect.getConnectStatus(), _dbConnect, _mode); // Создание таблицы password_hash исли она не существуют

        tables[2] = new db_Table_Messages(_dbConnect.getConnectStatus(), _dbConnect, _mode); // Создать таблицу messages если она не существуют

        if (tables[0]->getStatusCreateTable() && tables[1]->getStatusCreateTable() && tables[2]->getStatusCreateTable())
            this->_chatStart = true;
        else
            this->_chatStart = false;
    }
}

const bool workingChat::get_ChatStart() const
{
    return this->_chatStart;
}

const string workingChat::getConnectDB() const
{
    return this->_dbConnect.get_dbName();
}
