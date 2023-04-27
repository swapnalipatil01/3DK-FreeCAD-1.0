
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in SketchGeometryExtensionPyImp.cpp! It's not intended to be in a project!

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

/// Type structure of SketchGeometryExtensionPy
PyTypeObject SketchGeometryExtensionPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Sketcher.SketchGeometryExtension",     /*tp_name*/
    sizeof(SketchGeometryExtensionPy),                       /*tp_basicsize*/
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
    "Describes a SketchGeometryExtension",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Sketcher::SketchGeometryExtensionPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Sketcher::SketchGeometryExtensionPy::GetterSetter,                     /*tp_getset */
    &Part::GeometryExtensionPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Sketcher::SketchGeometryExtensionPy::PyMake,/*tp_new */
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

/// Methods structure of SketchGeometryExtensionPy
PyMethodDef SketchGeometryExtensionPy::Methods[] = {
    {"testGeometryMode",
        reinterpret_cast<PyCFunction>( staticCallback_testGeometryMode ),
        METH_VARARGS,
        "Returns a boolean indicating whether the given bit is set."
    },
    {"setGeometryMode",
        reinterpret_cast<PyCFunction>( staticCallback_setGeometryMode ),
        METH_VARARGS,
        "Sets the given bit to true/false."
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of SketchGeometryExtensionPy
PyGetSetDef SketchGeometryExtensionPy::GetterSetter[] = {
    {"Id",
        (getter) staticCallback_getId,
        (setter) staticCallback_setId,
        "\n                Returns the Id of the SketchGeometryExtension.\n            ",
        nullptr
    },
    {"InternalType",
        (getter) staticCallback_getInternalType,
        (setter) staticCallback_setInternalType,
        "\n                Returns the Id of the SketchGeometryExtension.\n            ",
        nullptr
    },
    {"Blocked",
        (getter) staticCallback_getBlocked,
        (setter) staticCallback_setBlocked,
        "\n                Sets/returns whether the geometry is blocked or not.\n            ",
        nullptr
    },
    {"Construction",
        (getter) staticCallback_getConstruction,
        (setter) staticCallback_setConstruction,
        "Sets/returns this geometry as a construction one, which will not be part of a later built shape.",
        nullptr
    },
    {"GeometryLayerId",
        (getter) staticCallback_getGeometryLayerId,
        (setter) staticCallback_setGeometryLayerId,
        "\n                Returns the Id of the geometry Layer in which the geometry is located.\n            ",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// testGeometryMode() callback and implementer
// PyObject*  SketchGeometryExtensionPy::testGeometryMode(PyObject *args){};
// has to be implemented in SketchGeometryExtensionPyImp.cpp
PyObject * SketchGeometryExtensionPy::staticCallback_testGeometryMode (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'testGeometryMode' of 'Sketcher.SketchGeometryExtension' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }


    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<SketchGeometryExtensionPy*>(self)->testGeometryMode(args);
        return ret;
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
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown C++ exception");
        return nullptr;
    }
#endif
}

// setGeometryMode() callback and implementer
// PyObject*  SketchGeometryExtensionPy::setGeometryMode(PyObject *args){};
// has to be implemented in SketchGeometryExtensionPyImp.cpp
PyObject * SketchGeometryExtensionPy::staticCallback_setGeometryMode (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'setGeometryMode' of 'Sketcher.SketchGeometryExtension' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return nullptr;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<SketchGeometryExtensionPy*>(self)->setGeometryMode(args);
        if (ret != 0)
            static_cast<SketchGeometryExtensionPy*>(self)->startNotify();
        return ret;
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
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown C++ exception");
        return nullptr;
    }
#endif
}

// Id() callback and implementer
// PyObject*  SketchGeometryExtensionPy::Id(PyObject *args){};
// has to be implemented in SketchGeometryExtensionPyImp.cpp
PyObject * SketchGeometryExtensionPy::staticCallback_getId (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<SketchGeometryExtensionPy*>(self)->getId());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Id' of object 'SketchGeometryExtension'");
        return nullptr;
    }
}

int SketchGeometryExtensionPy::staticCallback_setId (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<SketchGeometryExtensionPy*>(self)->setId(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Id' of object 'SketchGeometryExtension'");
        return -1;
    }
}

// InternalType() callback and implementer
// PyObject*  SketchGeometryExtensionPy::InternalType(PyObject *args){};
// has to be implemented in SketchGeometryExtensionPyImp.cpp
PyObject * SketchGeometryExtensionPy::staticCallback_getInternalType (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<SketchGeometryExtensionPy*>(self)->getInternalType());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'InternalType' of object 'SketchGeometryExtension'");
        return nullptr;
    }
}

int SketchGeometryExtensionPy::staticCallback_setInternalType (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<SketchGeometryExtensionPy*>(self)->setInternalType(Py::String(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'InternalType' of object 'SketchGeometryExtension'");
        return -1;
    }
}

// Blocked() callback and implementer
// PyObject*  SketchGeometryExtensionPy::Blocked(PyObject *args){};
// has to be implemented in SketchGeometryExtensionPyImp.cpp
PyObject * SketchGeometryExtensionPy::staticCallback_getBlocked (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<SketchGeometryExtensionPy*>(self)->getBlocked());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Blocked' of object 'SketchGeometryExtension'");
        return nullptr;
    }
}

int SketchGeometryExtensionPy::staticCallback_setBlocked (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<SketchGeometryExtensionPy*>(self)->setBlocked(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Blocked' of object 'SketchGeometryExtension'");
        return -1;
    }
}

// Construction() callback and implementer
// PyObject*  SketchGeometryExtensionPy::Construction(PyObject *args){};
// has to be implemented in SketchGeometryExtensionPyImp.cpp
PyObject * SketchGeometryExtensionPy::staticCallback_getConstruction (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<SketchGeometryExtensionPy*>(self)->getConstruction());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Construction' of object 'SketchGeometryExtension'");
        return nullptr;
    }
}

int SketchGeometryExtensionPy::staticCallback_setConstruction (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<SketchGeometryExtensionPy*>(self)->setConstruction(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Construction' of object 'SketchGeometryExtension'");
        return -1;
    }
}

// GeometryLayerId() callback and implementer
// PyObject*  SketchGeometryExtensionPy::GeometryLayerId(PyObject *args){};
// has to be implemented in SketchGeometryExtensionPyImp.cpp
PyObject * SketchGeometryExtensionPy::staticCallback_getGeometryLayerId (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<SketchGeometryExtensionPy*>(self)->getGeometryLayerId());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'GeometryLayerId' of object 'SketchGeometryExtension'");
        return nullptr;
    }
}

int SketchGeometryExtensionPy::staticCallback_setGeometryLayerId (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<SketchGeometryExtensionPy*>(self)->setGeometryLayerId(Py::Long(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'GeometryLayerId' of object 'SketchGeometryExtension'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
SketchGeometryExtensionPy::SketchGeometryExtensionPy(SketchGeometryExtension *pcObject, PyTypeObject *T)
    : GeometryExtensionPy(static_cast<GeometryExtensionPy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
SketchGeometryExtensionPy::~SketchGeometryExtensionPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// SketchGeometryExtensionPy representation
//--------------------------------------------------------------------------
PyObject *SketchGeometryExtensionPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// SketchGeometryExtensionPy Attributes
//--------------------------------------------------------------------------
PyObject *SketchGeometryExtensionPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return GeometryExtensionPy::_getattr(attr);
}

int SketchGeometryExtensionPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return GeometryExtensionPy::_setattr(attr, value);
}

SketchGeometryExtension *SketchGeometryExtensionPy::getSketchGeometryExtensionPtr() const
{
    return static_cast<SketchGeometryExtension *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in SketchGeometryExtensionPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *SketchGeometryExtensionPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of SketchGeometryExtensionPy and the Twin object
    return new SketchGeometryExtensionPy(new SketchGeometryExtension);
}

// constructor method
int SketchGeometryExtensionPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string SketchGeometryExtensionPy::representation() const
{
    return std::string("<SketchGeometryExtension object>");
}

PyObject* SketchGeometryExtensionPy::testGeometryMode(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* SketchGeometryExtensionPy::setGeometryMode(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Long SketchGeometryExtensionPy::getId() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  SketchGeometryExtensionPy::setId(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::String SketchGeometryExtensionPy::getInternalType() const
{
    //return Py::String();
    throw Py::AttributeError("Not yet implemented");
}

void  SketchGeometryExtensionPy::setInternalType(Py::String arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean SketchGeometryExtensionPy::getBlocked() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  SketchGeometryExtensionPy::setBlocked(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean SketchGeometryExtensionPy::getConstruction() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  SketchGeometryExtensionPy::setConstruction(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Long SketchGeometryExtensionPy::getGeometryLayerId() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

void  SketchGeometryExtensionPy::setGeometryLayerId(Py::Long arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *SketchGeometryExtensionPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int SketchGeometryExtensionPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



