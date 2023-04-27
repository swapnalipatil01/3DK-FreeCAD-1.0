
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_SHAPEFIX_WIREVERTEXPY_H
#define PART_SHAPEFIX_WIREVERTEXPY_H

#include <Base/PyObjectBase.h>
#include <ShapeFix_WireVertex.hxx>
#include <string>


namespace Part
{

//===========================================================================
// ShapeFix_WireVertexPy - Python wrapper
//===========================================================================

/** The python export class for ShapeFix_WireVertex
 */
class PartExport ShapeFix_WireVertexPy : public Base::PyObjectBase
{
protected:
    ~ShapeFix_WireVertexPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    ShapeFix_WireVertexPy(ShapeFix_WireVertex *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = ShapeFix_WireVertex*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the init() method
    static PyObject * staticCallback_init (PyObject *self, PyObject *args);
    /// implementer for the init() method
    PyObject*  init(PyObject *args);
    /// callback for the wire() method
    static PyObject * staticCallback_wire (PyObject *self, PyObject *args);
    /// implementer for the wire() method
    PyObject*  wire(PyObject *args);
    /// callback for the fixSame() method
    static PyObject * staticCallback_fixSame (PyObject *self, PyObject *args);
    /// implementer for the fixSame() method
    PyObject*  fixSame(PyObject *args);
    /// callback for the fix() method
    static PyObject * staticCallback_fix (PyObject *self, PyObject *args);
    /// implementer for the fix() method
    PyObject*  fix(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    ShapeFix_WireVertex *getShapeFix_WireVertexPtr() const;

};

}  //namespace Part

#endif  // PART_SHAPEFIX_WIREVERTEXPY_H


