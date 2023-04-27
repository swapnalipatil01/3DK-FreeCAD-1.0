
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ChFi2d_FilletAlgoPyImp.cpp! It's not intended to be in a project!

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

/// Type structure of ChFi2d_FilletAlgoPy
PyTypeObject ChFi2d_FilletAlgoPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.ChFi2d.FilletAlgo",     /*tp_name*/
    sizeof(ChFi2d_FilletAlgoPy),                       /*tp_basicsize*/
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
    "Algorithm that creates fillet edge",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::ChFi2d_FilletAlgoPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::ChFi2d_FilletAlgoPy::GetterSetter,                     /*tp_getset */
    &Base::PyObjectBase::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::ChFi2d_FilletAlgoPy::PyMake,/*tp_new */
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

/// Methods structure of ChFi2d_FilletAlgoPy
PyMethodDef ChFi2d_FilletAlgoPy::Methods[] = {
    {"init",
        reinterpret_cast<PyCFunction>( staticCallback_init ),
        METH_VARARGS,
        "Initializes a fillet algorithm: accepts a wire consisting of two edges in a plane"
    },
    {"perform",
        reinterpret_cast<PyCFunction>( staticCallback_perform ),
        METH_VARARGS,
        "perform(radius) -> bool\n\nConstructs a fillet edge"
    },
    {"numberOfResults",
        reinterpret_cast<PyCFunction>( staticCallback_numberOfResults ),
        METH_VARARGS,
        "Returns number of possible solutions"
    },
    {"result",
        reinterpret_cast<PyCFunction>( staticCallback_result ),
        METH_VARARGS,
        "result(point, solution=-1)\n\nReturns result (fillet edge, modified edge1, modified edge2)"
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ChFi2d_FilletAlgoPy
PyGetSetDef ChFi2d_FilletAlgoPy::GetterSetter[] = {
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// init() callback and implementer
// PyObject*  ChFi2d_FilletAlgoPy::init(PyObject *args){};
// has to be implemented in ChFi2d_FilletAlgoPyImp.cpp
PyObject * ChFi2d_FilletAlgoPy::staticCallback_init (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'init' of 'Part.ChFi2d_FilletAlgo' object needs an argument");
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
        PyObject* ret = static_cast<ChFi2d_FilletAlgoPy*>(self)->init(args);
        if (ret != 0)
            static_cast<ChFi2d_FilletAlgoPy*>(self)->startNotify();
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
// PyObject*  ChFi2d_FilletAlgoPy::perform(PyObject *args){};
// has to be implemented in ChFi2d_FilletAlgoPyImp.cpp
PyObject * ChFi2d_FilletAlgoPy::staticCallback_perform (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'perform' of 'Part.ChFi2d_FilletAlgo' object needs an argument");
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
        PyObject* ret = static_cast<ChFi2d_FilletAlgoPy*>(self)->perform(args);
        if (ret != 0)
            static_cast<ChFi2d_FilletAlgoPy*>(self)->startNotify();
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

// numberOfResults() callback and implementer
// PyObject*  ChFi2d_FilletAlgoPy::numberOfResults(PyObject *args){};
// has to be implemented in ChFi2d_FilletAlgoPyImp.cpp
PyObject * ChFi2d_FilletAlgoPy::staticCallback_numberOfResults (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'numberOfResults' of 'Part.ChFi2d_FilletAlgo' object needs an argument");
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
        PyObject* ret = static_cast<ChFi2d_FilletAlgoPy*>(self)->numberOfResults(args);
        if (ret != 0)
            static_cast<ChFi2d_FilletAlgoPy*>(self)->startNotify();
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

// result() callback and implementer
// PyObject*  ChFi2d_FilletAlgoPy::result(PyObject *args){};
// has to be implemented in ChFi2d_FilletAlgoPyImp.cpp
PyObject * ChFi2d_FilletAlgoPy::staticCallback_result (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'result' of 'Part.ChFi2d_FilletAlgo' object needs an argument");
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
        PyObject* ret = static_cast<ChFi2d_FilletAlgoPy*>(self)->result(args);
        if (ret != 0)
            static_cast<ChFi2d_FilletAlgoPy*>(self)->startNotify();
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




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ChFi2d_FilletAlgoPy::ChFi2d_FilletAlgoPy(ChFi2d_FilletAlgo *pcObject, PyTypeObject *T)
    : PyObjectBase(static_cast<PyObjectBase::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ChFi2d_FilletAlgoPy::~ChFi2d_FilletAlgoPy()                                // Everything handled in parent
{
    // delete the handled object when the PyObject dies
    ChFi2d_FilletAlgoPy::PointerType ptr = static_cast<ChFi2d_FilletAlgoPy::PointerType>(_pcTwinPointer);
    delete ptr;
}

//--------------------------------------------------------------------------
// ChFi2d_FilletAlgoPy representation
//--------------------------------------------------------------------------
PyObject *ChFi2d_FilletAlgoPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ChFi2d_FilletAlgoPy Attributes
//--------------------------------------------------------------------------
PyObject *ChFi2d_FilletAlgoPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return PyObjectBase::_getattr(attr);
}

int ChFi2d_FilletAlgoPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return PyObjectBase::_setattr(attr, value);
}

ChFi2d_FilletAlgo *ChFi2d_FilletAlgoPy::getChFi2d_FilletAlgoPtr() const
{
    return static_cast<ChFi2d_FilletAlgo *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ChFi2d_FilletAlgoPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *ChFi2d_FilletAlgoPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of ChFi2d_FilletAlgoPy and the Twin object
    return new ChFi2d_FilletAlgoPy(new ChFi2d_FilletAlgo);
}

// constructor method
int ChFi2d_FilletAlgoPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ChFi2d_FilletAlgoPy::representation() const
{
    return std::string("<ChFi2d_FilletAlgo object>");
}

PyObject* ChFi2d_FilletAlgoPy::init(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ChFi2d_FilletAlgoPy::perform(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ChFi2d_FilletAlgoPy::numberOfResults(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ChFi2d_FilletAlgoPy::result(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



PyObject *ChFi2d_FilletAlgoPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ChFi2d_FilletAlgoPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



