/****************************************************************************
** Meta object code from reading C++ file 'CommonInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/CommonInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommonInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UIElement_t {
    QByteArrayData data[3];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UIElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UIElement_t qt_meta_stringdata_UIElement = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UIElement"
QT_MOC_LITERAL(1, 10, 6), // "update"
QT_MOC_LITERAL(2, 17, 0) // ""

    },
    "UIElement\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UIElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void UIElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UIElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject UIElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UIElement.data,
    qt_meta_data_UIElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UIElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UIElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UIElement.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UIElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SliderElement_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SliderElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SliderElement_t qt_meta_stringdata_SliderElement = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SliderElement"
QT_MOC_LITERAL(1, 14, 6), // "update"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "SliderElement\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliderElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SliderElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliderElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SliderElement::staticMetaObject = { {
    QMetaObject::SuperData::link<UIElement::staticMetaObject>(),
    qt_meta_stringdata_SliderElement.data,
    qt_meta_data_SliderElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SliderElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliderElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SliderElement.stringdata0))
        return static_cast<void*>(this);
    return UIElement::qt_metacast(_clname);
}

int SliderElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_RangeSliderElement_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RangeSliderElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RangeSliderElement_t qt_meta_stringdata_RangeSliderElement = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RangeSliderElement"
QT_MOC_LITERAL(1, 19, 6), // "update"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "RangeSliderElement\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RangeSliderElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RangeSliderElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RangeSliderElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RangeSliderElement::staticMetaObject = { {
    QMetaObject::SuperData::link<UIElement::staticMetaObject>(),
    qt_meta_stringdata_RangeSliderElement.data,
    qt_meta_data_RangeSliderElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RangeSliderElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RangeSliderElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RangeSliderElement.stringdata0))
        return static_cast<void*>(this);
    return UIElement::qt_metacast(_clname);
}

int RangeSliderElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_CheckboxElement_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckboxElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckboxElement_t qt_meta_stringdata_CheckboxElement = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CheckboxElement"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "CheckboxElement\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckboxElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CheckboxElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckboxElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CheckboxElement::staticMetaObject = { {
    QMetaObject::SuperData::link<UIElement::staticMetaObject>(),
    qt_meta_stringdata_CheckboxElement.data,
    qt_meta_data_CheckboxElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CheckboxElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckboxElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CheckboxElement.stringdata0))
        return static_cast<void*>(this);
    return UIElement::qt_metacast(_clname);
}

int CheckboxElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_RadioButtonElement_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioButtonElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioButtonElement_t qt_meta_stringdata_RadioButtonElement = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RadioButtonElement"
QT_MOC_LITERAL(1, 19, 6), // "update"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "RadioButtonElement\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioButtonElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RadioButtonElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioButtonElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RadioButtonElement::staticMetaObject = { {
    QMetaObject::SuperData::link<UIElement::staticMetaObject>(),
    qt_meta_stringdata_RadioButtonElement.data,
    qt_meta_data_RadioButtonElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioButtonElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioButtonElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioButtonElement.stringdata0))
        return static_cast<void*>(this);
    return UIElement::qt_metacast(_clname);
}

int RadioButtonElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TextEditElement_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextEditElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextEditElement_t qt_meta_stringdata_TextEditElement = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TextEditElement"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "TextEditElement\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEditElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TextEditElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextEditElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TextEditElement::staticMetaObject = { {
    QMetaObject::SuperData::link<UIElement::staticMetaObject>(),
    qt_meta_stringdata_TextEditElement.data,
    qt_meta_data_TextEditElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextEditElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEditElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextEditElement.stringdata0))
        return static_cast<void*>(this);
    return UIElement::qt_metacast(_clname);
}

int TextEditElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ComboboxElement_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboboxElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboboxElement_t qt_meta_stringdata_ComboboxElement = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ComboboxElement"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "ComboboxElement\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboboxElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ComboboxElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComboboxElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ComboboxElement::staticMetaObject = { {
    QMetaObject::SuperData::link<UIElement::staticMetaObject>(),
    qt_meta_stringdata_ComboboxElement.data,
    qt_meta_data_ComboboxElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComboboxElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboboxElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboboxElement.stringdata0))
        return static_cast<void*>(this);
    return UIElement::qt_metacast(_clname);
}

int ComboboxElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_InterfaceUI_t {
    QByteArrayData data[3];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfaceUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfaceUI_t qt_meta_stringdata_InterfaceUI = {
    {
QT_MOC_LITERAL(0, 0, 11), // "InterfaceUI"
QT_MOC_LITERAL(1, 12, 6), // "update"
QT_MOC_LITERAL(2, 19, 0) // ""

    },
    "InterfaceUI\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void InterfaceUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InterfaceUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject InterfaceUI::staticMetaObject = { {
    QMetaObject::SuperData::link<UIElement::staticMetaObject>(),
    qt_meta_stringdata_InterfaceUI.data,
    qt_meta_data_InterfaceUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InterfaceUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceUI.stringdata0))
        return static_cast<void*>(this);
    return UIElement::qt_metacast(_clname);
}

int InterfaceUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
