/****************************************************************************
** Meta object code from reading C++ file 'InstronGPIB.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../InstronGPIB.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstronGPIB.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
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
struct qt_meta_tag_ZN11InstronGPIBE_t {};
} // unnamed namespace

template <> constexpr inline auto InstronGPIB::qt_create_metaobjectdata<qt_meta_tag_ZN11InstronGPIBE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InstronGPIB",
        "log",
        "",
        "mensaje",
        "error",
        "conexionCambiada",
        "conectado",
        "datosActualizados",
        "DatosInstron",
        "datos",
        "conectar",
        "desconectar",
        "iniciarAdquisicion",
        "detenerAdquisicion",
        "subir",
        "bajar",
        "parar",
        "balancearCarga",
        "resetExtension",
        "cambiarVelocidad",
        "valor",
        "aplicarParametros",
        "ParametrosEnsayo",
        "parametros",
        "onTimer"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'log'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'error'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'conexionCambiada'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'datosActualizados'
        QtMocHelpers::SignalData<void(const DatosInstron &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'conectar'
        QtMocHelpers::SlotData<bool()>(10, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'desconectar'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'iniciarAdquisicion'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'detenerAdquisicion'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'subir'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bajar'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'parar'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'balancearCarga'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetExtension'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cambiarVelocidad'
        QtMocHelpers::SlotData<void(const QString &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Slot 'aplicarParametros'
        QtMocHelpers::SlotData<bool(const ParametrosEnsayo &)>(21, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'onTimer'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InstronGPIB, qt_meta_tag_ZN11InstronGPIBE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InstronGPIB::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InstronGPIBE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InstronGPIBE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11InstronGPIBE_t>.metaTypes,
    nullptr
} };

void InstronGPIB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InstronGPIB *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->log((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->conexionCambiada((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->datosActualizados((*reinterpret_cast<std::add_pointer_t<DatosInstron>>(_a[1]))); break;
        case 4: { bool _r = _t->conectar();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->desconectar(); break;
        case 6: _t->iniciarAdquisicion(); break;
        case 7: _t->detenerAdquisicion(); break;
        case 8: _t->subir(); break;
        case 9: _t->bajar(); break;
        case 10: _t->parar(); break;
        case 11: _t->balancearCarga(); break;
        case 12: _t->resetExtension(); break;
        case 13: _t->cambiarVelocidad((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: { bool _r = _t->aplicarParametros((*reinterpret_cast<std::add_pointer_t<ParametrosEnsayo>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->onTimer(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InstronGPIB::*)(const QString & )>(_a, &InstronGPIB::log, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InstronGPIB::*)(const QString & )>(_a, &InstronGPIB::error, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InstronGPIB::*)(bool )>(_a, &InstronGPIB::conexionCambiada, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InstronGPIB::*)(const DatosInstron & )>(_a, &InstronGPIB::datosActualizados, 3))
            return;
    }
}

const QMetaObject *InstronGPIB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstronGPIB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11InstronGPIBE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InstronGPIB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void InstronGPIB::log(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void InstronGPIB::error(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void InstronGPIB::conexionCambiada(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void InstronGPIB::datosActualizados(const DatosInstron & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
