
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ConstraintPyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

#if defined(__clang__)
# pragma clang diagnostic push
# pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif

using Base::streq;
using namespace Sketcher;

/// Type structure of ConstraintPy
PyTypeObject ConstraintPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Sketcher.Constraint",     /*tp_name*/
    sizeof(ConstraintPy),                       /*tp_basicsize*/
    0,                                                /*tp_itemsize*/
    /* methods */
    PyDestructor,                                     /*tp_dealloc*/
#if PY_VERSION_HEX >= 0x03080000
    0,                                                /*tp_vectorcall_offset*/
#else
    nullptr,                                          /*tp_print*/
#endif
    nullptr,                                          /*tp_getattr*/
    nullptr,                                          /*tp_setattr*/
    nullptr,                                          /*tp_compare*/
    __repr,                                           /*tp_repr*/
    nullptr,                                          /*tp_as_number*/
    nullptr,                                          /*tp_as_sequence*/
    nullptr,                                          /*tp_as_mapping*/
    nullptr,                                          /*tp_hash*/
    nullptr,                                          /*tp_call */
    nullptr,                                          /*tp_str  */
    __getattro,                                       /*tp_getattro*/
    __setattro,                                       /*tp_setattro*/
    /* --- Functions to access object as input/output buffer ---------*/
    nullptr,                                          /* tp_as_buffer */
    /* --- Flags to define presence of optional/expanded features */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT,        /*tp_flags */
    "With this object you can handle sketches",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Sketcher::ConstraintPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Sketcher::ConstraintPy::GetterSetter,                     /*tp_getset */
    &Base::PersistencePy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Sketcher::ConstraintPy::PyMake,/*tp_new */
    nullptr,                                          /*tp_free   Low-level free-memory routine */
    nullptr,                                          /*tp_is_gc  For PyObject_IS_GC */
    nullptr,                                          /*tp_bases */
    nullptr,                                          /*tp_mro    method resolution order */
    nullptr,                                          /*tp_cache */
    nullptr,                                          /*tp_subclasses */
    nullptr,                                          /*tp_weaklist */
    nullptr,                                          /*tp_del */
    0,                                                /*tp_version_tag */
    nullptr                                           /*tp_finalize */
#if PY_VERSION_HEX >= 0x03090000
    ,nullptr                                          /*tp_vectorcall */
#elif PY_VERSION_HEX >= 0x03080000
    ,nullptr                                          /*tp_vectorcall */
    /* bpo-37250: kept for backwards compatibility in CPython 3.8 only */
    ,nullptr                                          /*tp_print */
#endif
};

/// Methods structure of ConstraintPy
PyMethodDef ConstraintPy::Methods[] = {
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ConstraintPy
PyGetSetDef ConstraintPy::GetterSetter[] = {
    {"Type",
        (getter) staticCallback_getType,
        (setter) staticCallback_setType,
        "Get the constraint type",
        nullptr
    },
    {"First",
        (getter) staticCallback_getFirst,
        (setter) staticCallback_setFirst,
        "First geometry index the Constraint refers to",
        nullptr
    },
    {"FirstPos",
        (getter) staticCallback_getFirstPos,
        (setter) staticCallback_setFirstPos,
        "Position of first geometry index the Constraint refers to",
        nullptr
    },
    {"Second",
        (getter) staticCallback_getSecond,
        (setter) staticCallback_setSecond,
        "Second geometry index the Constraint refers to",
        nullptr
    },
    {"SecondPos",
        (getter) staticCallback_getSecondPos,
        (setter) staticCallback_setSecondPos,
        "Position of second geometry index the Constraint refers to",
        nullptr
    },
    {"Third",
        (getter) staticCallback_getThird,
        (setter) staticCallback_setThird,
        "Third geometry index the Constraint refers to",
        nullptr
    },
    {"ThirdPos",
        (getter) staticCallback_getThirdPos,
        (setter) staticCallback_setThirdPos,
        "Position of third geometry index the Constraint refers to",
        nullptr
    },
    {"Value",
        (getter) staticCallback_getValue,
        (setter) staticCallback_setValue,
        "Value of the Constraint",
        nullptr
    },
    {"Name",
        (getter) staticCallback_getName,
        (setter) staticCallback_setName,
        "Name of the constraint",
        nullptr
    },
    {"Driving",
        (getter) staticCallback_getDriving,
        (setter) staticCallback_setDriving,
        "Driving Constraint",
        nullptr
    },
    {"InVirtualSpace",
        (getter) staticCallback_getInVirtualSpace,
        (setter) staticCallback_setInVirtualSpace,
        "Constraint in virtual space",
        nullptr
    },
    {"IsActive",
        (getter) staticCallback_getIsActive,
        (setter) staticCallback_setIsActive,
        "Returns whether the constraint active (enforced) or not",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// Type() callback and implementer
// PyObject*  ConstraintPy::Type(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getType (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getType());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Type' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setType (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Type' of object 'Constraint' is read-only");
    return -1;
}

// First() callback and implementer
// PyObject*  ConstraintPy::First(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getFirst (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getFirst());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'First' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setFirst (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ConstraintPy*>(self)->setFirst(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'First' of object 'Constraint'");
        return -1;
    }
}

// FirstPos() callback and implementer
// PyObject*  ConstraintPy::FirstPos(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getFirstPos (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getFirstPos());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'FirstPos' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setFirstPos (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ConstraintPy*>(self)->setFirstPos(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'FirstPos' of object 'Constraint'");
        return -1;
    }
}

// Second() callback and implementer
// PyObject*  ConstraintPy::Second(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getSecond (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getSecond());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Second' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setSecond (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ConstraintPy*>(self)->setSecond(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Second' of object 'Constraint'");
        return -1;
    }
}

// SecondPos() callback and implementer
// PyObject*  ConstraintPy::SecondPos(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getSecondPos (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getSecondPos());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'SecondPos' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setSecondPos (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ConstraintPy*>(self)->setSecondPos(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'SecondPos' of object 'Constraint'");
        return -1;
    }
}

// Third() callback and implementer
// PyObject*  ConstraintPy::Third(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getThird (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getThird());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Third' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setThird (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ConstraintPy*>(self)->setThird(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Third' of object 'Constraint'");
        return -1;
    }
}

// ThirdPos() callback and implementer
// PyObject*  ConstraintPy::ThirdPos(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getThirdPos (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getThirdPos());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'ThirdPos' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setThirdPos (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ConstraintPy*>(self)->setThirdPos(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'ThirdPos' of object 'Constraint'");
        return -1;
    }
}

// Value() callback and implementer
// PyObject*  ConstraintPy::Value(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getValue (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getValue());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Value' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setValue (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Value' of object 'Constraint' is read-only");
    return -1;
}

// Name() callback and implementer
// PyObject*  ConstraintPy::Name(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getName (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getName());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Name' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setName (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ConstraintPy*>(self)->setName(Py::String(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Name' of object 'Constraint'");
        return -1;
    }
}

// Driving() callback and implementer
// PyObject*  ConstraintPy::Driving(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getDriving (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getDriving());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Driving' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setDriving (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Driving' of object 'Constraint' is read-only");
    return -1;
}

// InVirtualSpace() callback and implementer
// PyObject*  ConstraintPy::InVirtualSpace(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getInVirtualSpace (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getInVirtualSpace());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'InVirtualSpace' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setInVirtualSpace (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'InVirtualSpace' of object 'Constraint' is read-only");
    return -1;
}

// IsActive() callback and implementer
// PyObject*  ConstraintPy::IsActive(PyObject *args){};
// has to be implemented in ConstraintPyImp.cpp
PyObject * ConstraintPy::staticCallback_getIsActive (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConstraintPy*>(self)->getIsActive());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'IsActive' of object 'Constraint'");
        return nullptr;
    }
}

int ConstraintPy::staticCallback_setIsActive (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'IsActive' of object 'Constraint' is read-only");
    return -1;
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ConstraintPy::ConstraintPy(Constraint *pcObject, PyTypeObject *T)
    : PersistencePy(static_cast<PersistencePy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ConstraintPy::~ConstraintPy()                                // Everything handled in parent
{
    // delete the handled object when the PyObject dies
    ConstraintPy::PointerType ptr = static_cast<ConstraintPy::PointerType>(_pcTwinPointer);
    delete ptr;
}

//--------------------------------------------------------------------------
// ConstraintPy representation
//--------------------------------------------------------------------------
PyObject *ConstraintPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ConstraintPy Attributes
//--------------------------------------------------------------------------
PyObject *ConstraintPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
{
    try {
        // getter method for special Attributes (e.g. dynamic ones)
        PyObject *r = getCustomAttributes(attr);
        if(r) return r;
    } // Please sync the following catch implementation with PY_CATCH
    catch(Base::Exception &e)
    {
        auto pye = e.getPyExceptionType();
        if(!pye)
            pye = Base::PyExc_FC_GeneralError;
        PyErr_SetObject(pye, e.getPyObject());
        return nullptr;
    }
    catch(const std::exception &e)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, e.what());
        return nullptr;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return nullptr;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS
    catch(...)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError,"Unknown C++ exception");
        return nullptr;
    }
#endif

    PyMethodDef *ml = Methods;
    for (; ml->ml_name != nullptr; ml++) {
        if (attr[0] == ml->ml_name[0] &&
            strcmp(attr+1, ml->ml_name+1) == 0)
            return PyCFunction_New(ml, this);
    }

    PyErr_Clear();
    return PersistencePy::_getattr(attr);
}

int ConstraintPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
{
    try {
        // setter for special Attributes (e.g. dynamic ones)
        int r = setCustomAttributes(attr, value);
        // r = 1: handled
        // r = -1: error
        // r = 0: ignore
        if (r == 1)
            return 0;
        else if (r == -1)
            return -1;
    } // Please sync the following catch implementation with PY_CATCH
    catch(Base::Exception &e)
    {
        auto pye = e.getPyExceptionType();
        if(!pye)
            pye = Base::PyExc_FC_GeneralError;
        PyErr_SetObject(pye, e.getPyObject());
        return -1;
    }
    catch(const std::exception &e)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, e.what());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS
    catch(...)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown C++ exception");
        return -1;
    }
#endif

    return PersistencePy::_setattr(attr, value);
}

Constraint *ConstraintPy::getConstraintPtr() const
{
    return static_cast<Constraint *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ConstraintPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *ConstraintPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of ConstraintPy and the Twin object
    return new ConstraintPy(new Constraint);
}

// constructor method
int ConstraintPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ConstraintPy::representation() const
{
    return std::string("<Constraint object>");
}



Py::String ConstraintPy::getType() const
{
    //return Py::String();
    throw Py::AttributeError("Not yet implemented");
}

Py::Long ConstraintPy::getFirst() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  ConstraintPy::setFirst(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long ConstraintPy::getFirstPos() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  ConstraintPy::setFirstPos(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long ConstraintPy::getSecond() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  ConstraintPy::setSecond(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long ConstraintPy::getSecondPos() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  ConstraintPy::setSecondPos(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long ConstraintPy::getThird() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  ConstraintPy::setThird(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long ConstraintPy::getThirdPos() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  ConstraintPy::setThirdPos(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ConstraintPy::getValue() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

Py::String ConstraintPy::getName() const
{
    //return Py::String();
    throw Py::AttributeError("Not yet implemented");
}

void  ConstraintPy::setName(Py::String arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ConstraintPy::getDriving() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ConstraintPy::getInVirtualSpace() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ConstraintPy::getIsActive() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ConstraintPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ConstraintPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



