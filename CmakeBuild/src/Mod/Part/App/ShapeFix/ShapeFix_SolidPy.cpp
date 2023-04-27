
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ShapeFix_SolidPyImp.cpp! It's not intended to be in a project!

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
using namespace Part;

/// Type structure of ShapeFix_SolidPy
PyTypeObject ShapeFix_SolidPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.ShapeFix.Solid",     /*tp_name*/
    sizeof(ShapeFix_SolidPy),                       /*tp_basicsize*/
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
    "Root class for fixing operations",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::ShapeFix_SolidPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::ShapeFix_SolidPy::GetterSetter,                     /*tp_getset */
    &Part::ShapeFix_RootPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::ShapeFix_SolidPy::PyMake,/*tp_new */
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

/// Methods structure of ShapeFix_SolidPy
PyMethodDef ShapeFix_SolidPy::Methods[] = {
    {"init",
        reinterpret_cast<PyCFunction>( staticCallback_init ),
        METH_VARARGS,
        "Initializes by solid"
    },
    {"perform",
        reinterpret_cast<PyCFunction>( staticCallback_perform ),
        METH_VARARGS,
        "Iterates on subshapes and performs fixes"
    },
    {"solidFromShell",
        reinterpret_cast<PyCFunction>( staticCallback_solidFromShell ),
        METH_VARARGS,
        "Calls MakeSolid and orients the solid to be not infinite"
    },
    {"solid",
        reinterpret_cast<PyCFunction>( staticCallback_solid ),
        METH_VARARGS,
        "Returns resulting solid"
    },
    {"shape",
        reinterpret_cast<PyCFunction>( staticCallback_shape ),
        METH_VARARGS,
        "In case of multiconnexity returns compound of fixed solids\nelse returns one solid"
    },
    {"fixShellTool",
        reinterpret_cast<PyCFunction>( staticCallback_fixShellTool ),
        METH_VARARGS,
        "Returns tool for fixing shells"
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ShapeFix_SolidPy
PyGetSetDef ShapeFix_SolidPy::GetterSetter[] = {
    {"FixShellMode",
        (getter) staticCallback_getFixShellMode,
        (setter) staticCallback_setFixShellMode,
        "Mode for applying fixes of ShapeFix_Shell",
        nullptr
    },
    {"FixShellOrientationMode",
        (getter) staticCallback_getFixShellOrientationMode,
        (setter) staticCallback_setFixShellOrientationMode,
        "Mode for applying analysis and fixes of\norientation of shells in the solid",
        nullptr
    },
    {"CreateOpenSolidMode",
        (getter) staticCallback_getCreateOpenSolidMode,
        (setter) staticCallback_setCreateOpenSolidMode,
        "Mode for creation of solids",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// init() callback and implementer
// PyObject*  ShapeFix_SolidPy::init(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_init (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'init' of 'Part.ShapeFix_Solid' object needs an argument");
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
        PyObject* ret = static_cast<ShapeFix_SolidPy*>(self)->init(args);
        if (ret != 0)
            static_cast<ShapeFix_SolidPy*>(self)->startNotify();
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

// perform() callback and implementer
// PyObject*  ShapeFix_SolidPy::perform(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_perform (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'perform' of 'Part.ShapeFix_Solid' object needs an argument");
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
        PyObject* ret = static_cast<ShapeFix_SolidPy*>(self)->perform(args);
        if (ret != 0)
            static_cast<ShapeFix_SolidPy*>(self)->startNotify();
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

// solidFromShell() callback and implementer
// PyObject*  ShapeFix_SolidPy::solidFromShell(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_solidFromShell (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'solidFromShell' of 'Part.ShapeFix_Solid' object needs an argument");
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
        PyObject* ret = static_cast<ShapeFix_SolidPy*>(self)->solidFromShell(args);
        if (ret != 0)
            static_cast<ShapeFix_SolidPy*>(self)->startNotify();
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

// solid() callback and implementer
// PyObject*  ShapeFix_SolidPy::solid(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_solid (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'solid' of 'Part.ShapeFix_Solid' object needs an argument");
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
        PyObject* ret = static_cast<ShapeFix_SolidPy*>(self)->solid(args);
        if (ret != 0)
            static_cast<ShapeFix_SolidPy*>(self)->startNotify();
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

// shape() callback and implementer
// PyObject*  ShapeFix_SolidPy::shape(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_shape (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'shape' of 'Part.ShapeFix_Solid' object needs an argument");
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
        PyObject* ret = static_cast<ShapeFix_SolidPy*>(self)->shape(args);
        if (ret != 0)
            static_cast<ShapeFix_SolidPy*>(self)->startNotify();
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

// fixShellTool() callback and implementer
// PyObject*  ShapeFix_SolidPy::fixShellTool(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_fixShellTool (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'fixShellTool' of 'Part.ShapeFix_Solid' object needs an argument");
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
        PyObject* ret = static_cast<ShapeFix_SolidPy*>(self)->fixShellTool(args);
        if (ret != 0)
            static_cast<ShapeFix_SolidPy*>(self)->startNotify();
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

// FixShellMode() callback and implementer
// PyObject*  ShapeFix_SolidPy::FixShellMode(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_getFixShellMode (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_SolidPy*>(self)->getFixShellMode());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'FixShellMode' of object 'ShapeFix_Solid'");
        return nullptr;
    }
}

int ShapeFix_SolidPy::staticCallback_setFixShellMode (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ShapeFix_SolidPy*>(self)->setFixShellMode(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'FixShellMode' of object 'ShapeFix_Solid'");
        return -1;
    }
}

// FixShellOrientationMode() callback and implementer
// PyObject*  ShapeFix_SolidPy::FixShellOrientationMode(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_getFixShellOrientationMode (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_SolidPy*>(self)->getFixShellOrientationMode());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'FixShellOrientationMode' of object 'ShapeFix_Solid'");
        return nullptr;
    }
}

int ShapeFix_SolidPy::staticCallback_setFixShellOrientationMode (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ShapeFix_SolidPy*>(self)->setFixShellOrientationMode(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'FixShellOrientationMode' of object 'ShapeFix_Solid'");
        return -1;
    }
}

// CreateOpenSolidMode() callback and implementer
// PyObject*  ShapeFix_SolidPy::CreateOpenSolidMode(PyObject *args){};
// has to be implemented in ShapeFix_SolidPyImp.cpp
PyObject * ShapeFix_SolidPy::staticCallback_getCreateOpenSolidMode (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_SolidPy*>(self)->getCreateOpenSolidMode());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'CreateOpenSolidMode' of object 'ShapeFix_Solid'");
        return nullptr;
    }
}

int ShapeFix_SolidPy::staticCallback_setCreateOpenSolidMode (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ShapeFix_SolidPy*>(self)->setCreateOpenSolidMode(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'CreateOpenSolidMode' of object 'ShapeFix_Solid'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ShapeFix_SolidPy::ShapeFix_SolidPy(ShapeFix_Solid *pcObject, PyTypeObject *T)
    : ShapeFix_RootPy(static_cast<ShapeFix_RootPy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ShapeFix_SolidPy::~ShapeFix_SolidPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ShapeFix_SolidPy representation
//--------------------------------------------------------------------------
PyObject *ShapeFix_SolidPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ShapeFix_SolidPy Attributes
//--------------------------------------------------------------------------
PyObject *ShapeFix_SolidPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return ShapeFix_RootPy::_getattr(attr);
}

int ShapeFix_SolidPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return ShapeFix_RootPy::_setattr(attr, value);
}

ShapeFix_Solid *ShapeFix_SolidPy::getShapeFix_SolidPtr() const
{
    return static_cast<ShapeFix_Solid *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ShapeFix_SolidPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *ShapeFix_SolidPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of ShapeFix_SolidPy and the Twin object
    return new ShapeFix_SolidPy(new ShapeFix_Solid);
}

// constructor method
int ShapeFix_SolidPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ShapeFix_SolidPy::representation() const
{
    return std::string("<ShapeFix_Solid object>");
}

PyObject* ShapeFix_SolidPy::init(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_SolidPy::perform(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_SolidPy::solidFromShell(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_SolidPy::solid(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_SolidPy::shape(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_SolidPy::fixShellTool(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Boolean ShapeFix_SolidPy::getFixShellMode() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_SolidPy::setFixShellMode(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ShapeFix_SolidPy::getFixShellOrientationMode() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_SolidPy::setFixShellOrientationMode(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ShapeFix_SolidPy::getCreateOpenSolidMode() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_SolidPy::setCreateOpenSolidMode(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ShapeFix_SolidPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ShapeFix_SolidPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



