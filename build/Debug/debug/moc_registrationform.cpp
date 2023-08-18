/****************************************************************************
** Meta object code from reading C++ file 'registrationform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../registrationform.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registrationform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRegistrationFormENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRegistrationFormENDCLASS = QtMocHelpers::stringData(
    "RegistrationForm",
    "authorizationRequested",
    "",
    "accepted",
    "std::string",
    "currentNameUser",
    "rejected",
    "on_LoginButton_clicked",
    "on_buttonBox_accepted",
    "on_buttonBox_rejected",
    "on_NameEdit_returnPressed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRegistrationFormENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[17];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
    char stringdata5[16];
    char stringdata6[9];
    char stringdata7[23];
    char stringdata8[22];
    char stringdata9[22];
    char stringdata10[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRegistrationFormENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRegistrationFormENDCLASS_t qt_meta_stringdata_CLASSRegistrationFormENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "RegistrationForm"
        QT_MOC_LITERAL(17, 22),  // "authorizationRequested"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 8),  // "accepted"
        QT_MOC_LITERAL(50, 11),  // "std::string"
        QT_MOC_LITERAL(62, 15),  // "currentNameUser"
        QT_MOC_LITERAL(78, 8),  // "rejected"
        QT_MOC_LITERAL(87, 22),  // "on_LoginButton_clicked"
        QT_MOC_LITERAL(110, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(132, 21),  // "on_buttonBox_rejected"
        QT_MOC_LITERAL(154, 25)   // "on_NameEdit_returnPressed"
    },
    "RegistrationForm",
    "authorizationRequested",
    "",
    "accepted",
    "std::string",
    "currentNameUser",
    "rejected",
    "on_LoginButton_clicked",
    "on_buttonBox_accepted",
    "on_buttonBox_rejected",
    "on_NameEdit_returnPressed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRegistrationFormENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    1,   57,    2, 0x06,    2 /* Public */,
       6,    0,   60,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   61,    2, 0x08,    5 /* Private */,
       8,    0,   62,    2, 0x08,    6 /* Private */,
       9,    0,   63,    2, 0x08,    7 /* Private */,
      10,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RegistrationForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRegistrationFormENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRegistrationFormENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRegistrationFormENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RegistrationForm, std::true_type>,
        // method 'authorizationRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LoginButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_NameEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RegistrationForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegistrationForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authorizationRequested(); break;
        case 1: _t->accepted((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 2: _t->rejected(); break;
        case 3: _t->on_LoginButton_clicked(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_buttonBox_rejected(); break;
        case 6: _t->on_NameEdit_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegistrationForm::*)();
            if (_t _q_method = &RegistrationForm::authorizationRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RegistrationForm::*)(std::string );
            if (_t _q_method = &RegistrationForm::accepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RegistrationForm::*)();
            if (_t _q_method = &RegistrationForm::rejected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *RegistrationForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegistrationForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRegistrationFormENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RegistrationForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RegistrationForm::authorizationRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RegistrationForm::accepted(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RegistrationForm::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
