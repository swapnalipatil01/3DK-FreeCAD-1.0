
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ConePyImp.cpp! It's not intended to be in a project!

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

/// Type structure of ConePy
PyTypeObject ConePy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.Cone",     /*tp_name*/
    sizeof(ConePy),                       /*tp_basicsize*/
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
    "Describes a cone in 3D space\n"
    "				To create a cone there are several ways:\n"
    "				Part.Cone()\n"
    "				    Creates a default cone with radius 1\n"
    "\n"
    "				Part.Cone(Cone)\n"
    "				    Creates a copy of the given cone\n"
    "\n"
    "				Part.Cone(Cone, Distance)\n"
    "				    Creates a cone parallel to given cone at a certain distance\n"
    "\n"
    "				Part.Cone(Point1,Point2,Radius1,Radius2)\n"
    "				    Creates a cone defined by two points and two radii\n"
    "				    The axis of the cone is the line passing through\n"
    "				    Point1 and Poin2.\n"
    "				    Radius1 is the radius of the section passing through\n"
    "				    Point1 and Radius2 the radius of the section passing\n"
    "				    through Point2.\n"
    "\n"
    "				Part.Cone(Point1,Point2,Point3,Point4)\n"
    "				    Creates a cone passing through three points Point1,\n"
    "				    Point2 and Point3.\n"
    "				    Its axis is defined by Point1 and Point2 and the radius of\n"
    "				    its base is the distance between Point3 and its axis.\n"
    "				    The distance between Point and the axis is the radius of\n"
    "				    the section passing through Point4.\n"
    "			",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::ConePy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::ConePy::GetterSetter,                     /*tp_getset */
    &Part::GeometrySurfacePy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::ConePy::PyMake,/*tp_new */
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

/// Methods structure of ConePy
PyMethodDef ConePy::Methods[] = {
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ConePy
PyGetSetDef ConePy::GetterSetter[] = {
    {"Apex",
        (getter) staticCallback_getApex,
        (setter) staticCallback_setApex,
        "Compute the apex of the cone.",
        nullptr
    },
    {"Radius",
        (getter) staticCallback_getRadius,
        (setter) staticCallback_setRadius,
        "The radius of the cone.",
        nullptr
    },
    {"SemiAngle",
        (getter) staticCallback_getSemiAngle,
        (setter) staticCallback_setSemiAngle,
        "The semi-angle of the cone.",
        nullptr
    },
    {"Center",
        (getter) staticCallback_getCenter,
        (setter) staticCallback_setCenter,
        "Center of the cone.",
        nullptr
    },
    {"Axis",
        (getter) staticCallback_getAxis,
        (setter) staticCallback_setAxis,
        "The axis direction of the cone",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// Apex() callback and implementer
// PyObject*  ConePy::Apex(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getApex (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getApex());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Apex' of object 'GeomCone'");
        return nullptr;
    }
}

int ConePy::staticCallback_setApex (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Apex' of object 'GeomCone' is read-only");
    return -1;
}

// Radius() callback and implementer
// PyObject*  ConePy::Radius(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Radius' of object 'GeomCone'");
        return nullptr;
    }
}

int ConePy::staticCallback_setRadius (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Radius' of object 'GeomCone'");
        return -1;
    }
}

// SemiAngle() callback and implementer
// PyObject*  ConePy::SemiAngle(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getSemiAngle (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getSemiAngle());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'SemiAngle' of object 'GeomCone'");
        return nullptr;
    }
}

int ConePy::staticCallback_setSemiAngle (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setSemiAngle(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'SemiAngle' of object 'GeomCone'");
        return -1;
    }
}

// Center() callback and implementer
// PyObject*  ConePy::Center(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getCenter (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getCenter());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Center' of object 'GeomCone'");
        return nullptr;
    }
}

int ConePy::staticCallback_setCenter (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setCenter(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Center' of object 'GeomCone'");
        return -1;
    }
}

// Axis() callback and implementer
// PyObject*  ConePy::Axis(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getAxis (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getAxis());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Axis' of object 'GeomCone'");
        return nullptr;
    }
}

int ConePy::staticCallback_setAxis (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setAxis(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Axis' of object 'GeomCone'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ConePy::ConePy(GeomCone *pcObject, PyTypeObject *T)
    : GeometrySurfacePy(static_cast<GeometrySurfacePy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ConePy::~ConePy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ConePy representation
//--------------------------------------------------------------------------
PyObject *ConePy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ConePy Attributes
//--------------------------------------------------------------------------
PyObject *ConePy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return GeometrySurfacePy::_getattr(attr);
}

int ConePy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return GeometrySurfacePy::_setattr(attr, value);
}

GeomCone *ConePy::getGeomConePtr() const
{
    return static_cast<GeomCone *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ConePyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *ConePy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of ConePy and the Twin object
    return new ConePy(new GeomCone);
}

// constructor method
int ConePy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ConePy::representation() const
{
    return std::string("<GeomCone object>");
}



Py::Object ConePy::getApex() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ConePy::getRadius() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ConePy::getSemiAngle() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setSemiAngle(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ConePy::getCenter() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setCenter(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ConePy::getAxis() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setAxis(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ConePy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ConePy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



