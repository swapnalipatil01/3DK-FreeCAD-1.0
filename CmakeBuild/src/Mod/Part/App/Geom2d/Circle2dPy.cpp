
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in Circle2dPyImp.cpp! It's not intended to be in a project!

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

/// Type structure of Circle2dPy
PyTypeObject Circle2dPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.Geom2d.Circle2d",     /*tp_name*/
    sizeof(Circle2dPy),                       /*tp_basicsize*/
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
    "Describes a circle in 3D space\n"
    "To create a circle there are several ways:\n"
    "Part.Geom2d.Circle2d()\n"
    "    Creates a default circle with center (0,0) and radius 1\n"
    "\n"
    "Part.Geom2d.Circle2d(circle)\n"
    "    Creates a copy of the given circle\n"
    "\n"
    "Part.Geom2d.Circle2d(circle, Distance)\n"
    "    Creates a circle parallel to given circle at a certain distance\n"
    "\n"
    "Part.Geom2d.Circle2d(Center,Radius)\n"
    "    Creates a circle defined by center and radius\n"
    "\n"
    "Part.Geom2d.Circle2d(Point1,Point2,Point3)\n"
    "    Creates a circle defined by three non-linear points\n"
    "   ",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::Circle2dPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::Circle2dPy::GetterSetter,                     /*tp_getset */
    &Part::Conic2dPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::Circle2dPy::PyMake,/*tp_new */
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

/// Methods structure of Circle2dPy
PyMethodDef Circle2dPy::Methods[] = {
    {"getCircleCenter",
        reinterpret_cast<PyCFunction>(reinterpret_cast<void (*) (void)>( staticCallback_getCircleCenter )),
        METH_VARARGS|METH_STATIC,
        "Get the circle center defined by three points"
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of Circle2dPy
PyGetSetDef Circle2dPy::GetterSetter[] = {
    {"Radius",
        (getter) staticCallback_getRadius,
        (setter) staticCallback_setRadius,
        "The radius of the circle.",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// getCircleCenter() callback and implementer
// PyObject*  Circle2dPy::getCircleCenter(PyObject *args){};
// has to be implemented in Circle2dPyImp.cpp
PyObject * Circle2dPy::staticCallback_getCircleCenter (PyObject *self, PyObject *args)
{
    try { // catches all exceptions coming up from c++ and generate a python exception
        (void)self;
        PyObject* ret = Circle2dPy::getCircleCenter(args);
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

// Radius() callback and implementer
// PyObject*  Circle2dPy::Radius(PyObject *args){};
// has to be implemented in Circle2dPyImp.cpp
PyObject * Circle2dPy::staticCallback_getRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<Circle2dPy*>(self)->getRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Radius' of object 'Geom2dCircle'");
        return nullptr;
    }
}

int Circle2dPy::staticCallback_setRadius (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<Circle2dPy*>(self)->setRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Radius' of object 'Geom2dCircle'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
Circle2dPy::Circle2dPy(Geom2dCircle *pcObject, PyTypeObject *T)
    : Conic2dPy(static_cast<Conic2dPy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
Circle2dPy::~Circle2dPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// Circle2dPy representation
//--------------------------------------------------------------------------
PyObject *Circle2dPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// Circle2dPy Attributes
//--------------------------------------------------------------------------
PyObject *Circle2dPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return Conic2dPy::_getattr(attr);
}

int Circle2dPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return Conic2dPy::_setattr(attr, value);
}

Geom2dCircle *Circle2dPy::getGeom2dCirclePtr() const
{
    return static_cast<Geom2dCircle *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in Circle2dPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *Circle2dPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of Circle2dPy and the Twin object
    return new Circle2dPy(new Geom2dCircle);
}

// constructor method
int Circle2dPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string Circle2dPy::representation() const
{
    return std::string("<Geom2dCircle object>");
}

PyObject* Circle2dPy::getCircleCenter(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Float Circle2dPy::getRadius() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  Circle2dPy::setRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *Circle2dPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int Circle2dPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif


