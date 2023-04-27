
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_GEOMFORMATPY_H
#define TECHDRAW_GEOMFORMATPY_H

#include <Base/PyObjectBase.h>
#include <Mod/TechDraw/App/Cosmetic.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// GeomFormatPy - Python wrapper
//===========================================================================

/** The python export class for GeomFormat
 */
class TechDrawExport GeomFormatPy : public Base::PyObjectBase
{
protected:
    ~GeomFormatPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    GeomFormatPy(GeomFormat *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = GeomFormat*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the clone() method
    static PyObject * staticCallback_clone (PyObject *self, PyObject *args);
    /// implementer for the clone() method
    PyObject*  clone(PyObject *args);
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Tag attribute
    static PyObject * staticCallback_getTag (PyObject *self, void *closure);
    /// getter for the Tag attribute
    Py::String getTag() const;
    /// setter callback for the Tag attribute
    static int staticCallback_setTag (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Tag is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomFormat *getGeomFormatPtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_GEOMFORMATPY_H


