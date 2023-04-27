
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_POINTPY_H
#define PART_POINTPY_H

#include <Mod/Part/App/GeometryPy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>


namespace Part
{

//===========================================================================
// PointPy - Python wrapper
//===========================================================================

/** The python export class for GeomPoint
 */
class PartExport PointPy : public Part::GeometryPy
{
protected:
    ~PointPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    PointPy(GeomPoint *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = GeomPoint*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the toShape() method
    static PyObject * staticCallback_toShape (PyObject *self, PyObject *args);
    /// implementer for the toShape() method
    PyObject*  toShape(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the X attribute
    static PyObject * staticCallback_getX (PyObject *self, void *closure);
    /// getter for the X attribute
    Py::Float getX() const;
    /// setter callback for the X attribute
    static int staticCallback_setX (PyObject *self, PyObject *value, void *closure);
    /// setter for the X attribute
    void setX(Py::Float arg);
    ///getter callback for the Y attribute
    static PyObject * staticCallback_getY (PyObject *self, void *closure);
    /// getter for the Y attribute
    Py::Float getY() const;
    /// setter callback for the Y attribute
    static int staticCallback_setY (PyObject *self, PyObject *value, void *closure);
    /// setter for the Y attribute
    void setY(Py::Float arg);
    ///getter callback for the Z attribute
    static PyObject * staticCallback_getZ (PyObject *self, void *closure);
    /// getter for the Z attribute
    Py::Float getZ() const;
    /// setter callback for the Z attribute
    static int staticCallback_setZ (PyObject *self, PyObject *value, void *closure);
    /// setter for the Z attribute
    void setZ(Py::Float arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomPoint *getGeomPointPtr() const;

};

}  //namespace Part

#endif  // PART_POINTPY_H


