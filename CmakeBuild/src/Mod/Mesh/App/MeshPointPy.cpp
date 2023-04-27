
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in MeshPointPyImp.cpp! It's not intended to be in a project!

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
using namespace Mesh;

/// Type structure of MeshPointPy
PyTypeObject MeshPointPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Mesh.MeshPoint",     /*tp_name*/
    sizeof(MeshPointPy),                       /*tp_basicsize*/
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
    " Point in mesh\n"
    "This is a point in a MeshObject. You can get it by e.g. iterating a\n"
    "mesh. The point has a connection to its mesh and allows therefore\n"
    "topological operations. It is also possible to create an unbounded mesh point e.g. to create\n"
    "a mesh. In this case the topological operations will fail. The same is\n"
    "when you cut the bound to the mesh by calling unbound().\n"
    "	  ",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Mesh::MeshPointPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Mesh::MeshPointPy::GetterSetter,                     /*tp_getset */
    &Base::PyObjectBase::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Mesh::MeshPointPy::PyMake,/*tp_new */
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

/// Methods structure of MeshPointPy
PyMethodDef MeshPointPy::Methods[] = {
    {"unbound",
        reinterpret_cast<PyCFunction>( staticCallback_unbound ),
        METH_VARARGS,
        " method unbound()\nCut the connection to a MeshObject. The point becomes\nfree and is more or less a simple vector/point.\nAfter calling unbound() no topological operation will\nwork!\n			  "
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of MeshPointPy
PyGetSetDef MeshPointPy::GetterSetter[] = {
    {"Index",
        (getter) staticCallback_getIndex,
        (setter) staticCallback_setIndex,
        "The index of this point in the MeshObject",
        nullptr
    },
    {"Bound",
        (getter) staticCallback_getBound,
        (setter) staticCallback_setBound,
        "Bound state of the point",
        nullptr
    },
    {"Normal",
        (getter) staticCallback_getNormal,
        (setter) staticCallback_setNormal,
        "Normal vector of the point computed by the surrounding mesh.",
        nullptr
    },
    {"Vector",
        (getter) staticCallback_getVector,
        (setter) staticCallback_setVector,
        "Vector of the point.",
        nullptr
    },
    {"x",
        (getter) staticCallback_getx,
        (setter) staticCallback_setx,
        "The X component of the point.",
        nullptr
    },
    {"y",
        (getter) staticCallback_gety,
        (setter) staticCallback_sety,
        "The Y component of the point.",
        nullptr
    },
    {"z",
        (getter) staticCallback_getz,
        (setter) staticCallback_setz,
        "The Z component of the point.",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// unbound() callback and implementer
// PyObject*  MeshPointPy::unbound(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_unbound (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'unbound' of 'Mesh.MeshPoint' object needs an argument");
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
        PyObject* ret = static_cast<MeshPointPy*>(self)->unbound(args);
        if (ret != 0)
            static_cast<MeshPointPy*>(self)->startNotify();
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

// Index() callback and implementer
// PyObject*  MeshPointPy::Index(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getIndex (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getIndex());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Index' of object 'MeshPoint'");
        return nullptr;
    }
}

int MeshPointPy::staticCallback_setIndex (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Index' of object 'MeshPoint' is read-only");
    return -1;
}

// Bound() callback and implementer
// PyObject*  MeshPointPy::Bound(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getBound (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getBound());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Bound' of object 'MeshPoint'");
        return nullptr;
    }
}

int MeshPointPy::staticCallback_setBound (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Bound' of object 'MeshPoint' is read-only");
    return -1;
}

// Normal() callback and implementer
// PyObject*  MeshPointPy::Normal(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getNormal (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getNormal());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Normal' of object 'MeshPoint'");
        return nullptr;
    }
}

int MeshPointPy::staticCallback_setNormal (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Normal' of object 'MeshPoint' is read-only");
    return -1;
}

// Vector() callback and implementer
// PyObject*  MeshPointPy::Vector(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getVector (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getVector());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Vector' of object 'MeshPoint'");
        return nullptr;
    }
}

int MeshPointPy::staticCallback_setVector (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Vector' of object 'MeshPoint' is read-only");
    return -1;
}

// x() callback and implementer
// PyObject*  MeshPointPy::x(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getx (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getx());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'x' of object 'MeshPoint'");
        return nullptr;
    }
}

int MeshPointPy::staticCallback_setx (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'x' of object 'MeshPoint' is read-only");
    return -1;
}

// y() callback and implementer
// PyObject*  MeshPointPy::y(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_gety (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->gety());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'y' of object 'MeshPoint'");
        return nullptr;
    }
}

int MeshPointPy::staticCallback_sety (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'y' of object 'MeshPoint' is read-only");
    return -1;
}

// z() callback and implementer
// PyObject*  MeshPointPy::z(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getz (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getz());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'z' of object 'MeshPoint'");
        return nullptr;
    }
}

int MeshPointPy::staticCallback_setz (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'z' of object 'MeshPoint' is read-only");
    return -1;
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
MeshPointPy::MeshPointPy(MeshPoint *pcObject, PyTypeObject *T)
    : PyObjectBase(static_cast<PyObjectBase::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
MeshPointPy::~MeshPointPy()                                // Everything handled in parent
{
    // delete the handled object when the PyObject dies
    MeshPointPy::PointerType ptr = static_cast<MeshPointPy::PointerType>(_pcTwinPointer);
    delete ptr;
}

//--------------------------------------------------------------------------
// MeshPointPy representation
//--------------------------------------------------------------------------
PyObject *MeshPointPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// MeshPointPy Attributes
//--------------------------------------------------------------------------
PyObject *MeshPointPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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

int MeshPointPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

MeshPoint *MeshPointPy::getMeshPointPtr() const
{
    return static_cast<MeshPoint *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in MeshPointPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *MeshPointPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of MeshPointPy and the Twin object
    return new MeshPointPy(new MeshPoint);
}

// constructor method
int MeshPointPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string MeshPointPy::representation() const
{
    return std::string("<MeshPoint object>");
}

PyObject* MeshPointPy::unbound(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Long MeshPointPy::getIndex() const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean MeshPointPy::getBound() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object MeshPointPy::getNormal() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object MeshPointPy::getVector() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Float MeshPointPy::getx() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

Py::Float MeshPointPy::gety() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

Py::Float MeshPointPy::getz() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

PyObject *MeshPointPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int MeshPointPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif


