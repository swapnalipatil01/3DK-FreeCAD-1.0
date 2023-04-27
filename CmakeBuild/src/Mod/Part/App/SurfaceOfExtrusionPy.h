
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_SURFACEOFEXTRUSIONPY_H
#define PART_SURFACEOFEXTRUSIONPY_H

#include <Mod/Part/App/GeometrySurfacePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>


namespace Part
{

//===========================================================================
// SurfaceOfExtrusionPy - Python wrapper
//===========================================================================

/** The python export class for GeomSurfaceOfExtrusion
 */
class PartExport SurfaceOfExtrusionPy : public Part::GeometrySurfacePy
{
protected:
    ~SurfaceOfExtrusionPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    SurfaceOfExtrusionPy(GeomSurfaceOfExtrusion *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = GeomSurfaceOfExtrusion*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Direction attribute
    static PyObject * staticCallback_getDirection (PyObject *self, void *closure);
    /// getter for the Direction attribute
    Py::Object getDirection() const;
    /// setter callback for the Direction attribute
    static int staticCallback_setDirection (PyObject *self, PyObject *value, void *closure);
    /// setter for the Direction attribute
    void setDirection(Py::Object arg);
    ///getter callback for the BasisCurve attribute
    static PyObject * staticCallback_getBasisCurve (PyObject *self, void *closure);
    /// getter for the BasisCurve attribute
    Py::Object getBasisCurve() const;
    /// setter callback for the BasisCurve attribute
    static int staticCallback_setBasisCurve (PyObject *self, PyObject *value, void *closure);
    /// setter for the BasisCurve attribute
    void setBasisCurve(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomSurfaceOfExtrusion *getGeomSurfaceOfExtrusionPtr() const;

};

}  //namespace Part

#endif  // PART_SURFACEOFEXTRUSIONPY_H


