
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_GEOMETRYPY_H
#define PART_GEOMETRYPY_H

#include <Base/PersistencePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>


namespace Part
{

//===========================================================================
// GeometryPy - Python wrapper
//===========================================================================

/** The python export class for Geometry
 */
class PartExport GeometryPy : public Base::PersistencePy
{
protected:
    ~GeometryPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    GeometryPy(Geometry *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Geometry*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the mirror() method
    static PyObject * staticCallback_mirror (PyObject *self, PyObject *args);
    /// implementer for the mirror() method
    PyObject*  mirror(PyObject *args);
    /// callback for the rotate() method
    static PyObject * staticCallback_rotate (PyObject *self, PyObject *args);
    /// implementer for the rotate() method
    PyObject*  rotate(PyObject *args);
    /// callback for the scale() method
    static PyObject * staticCallback_scale (PyObject *self, PyObject *args);
    /// implementer for the scale() method
    PyObject*  scale(PyObject *args);
    /// callback for the transform() method
    static PyObject * staticCallback_transform (PyObject *self, PyObject *args);
    /// implementer for the transform() method
    PyObject*  transform(PyObject *args);
    /// callback for the translate() method
    static PyObject * staticCallback_translate (PyObject *self, PyObject *args);
    /// implementer for the translate() method
    PyObject*  translate(PyObject *args);
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    /// callback for the clone() method
    static PyObject * staticCallback_clone (PyObject *self, PyObject *args);
    /// implementer for the clone() method
    PyObject*  clone(PyObject *args);
    /// callback for the hasExtensionOfType() method
    static PyObject * staticCallback_hasExtensionOfType (PyObject *self, PyObject *args);
    /// implementer for the hasExtensionOfType() method
    PyObject*  hasExtensionOfType(PyObject *args);
    /// callback for the hasExtensionOfName() method
    static PyObject * staticCallback_hasExtensionOfName (PyObject *self, PyObject *args);
    /// implementer for the hasExtensionOfName() method
    PyObject*  hasExtensionOfName(PyObject *args);
    /// callback for the getExtensionOfType() method
    static PyObject * staticCallback_getExtensionOfType (PyObject *self, PyObject *args);
    /// implementer for the getExtensionOfType() method
    PyObject*  getExtensionOfType(PyObject *args);
    /// callback for the getExtensionOfName() method
    static PyObject * staticCallback_getExtensionOfName (PyObject *self, PyObject *args);
    /// implementer for the getExtensionOfName() method
    PyObject*  getExtensionOfName(PyObject *args);
    /// callback for the setExtension() method
    static PyObject * staticCallback_setExtension (PyObject *self, PyObject *args);
    /// implementer for the setExtension() method
    PyObject*  setExtension(PyObject *args);
    /// callback for the deleteExtensionOfType() method
    static PyObject * staticCallback_deleteExtensionOfType (PyObject *self, PyObject *args);
    /// implementer for the deleteExtensionOfType() method
    PyObject*  deleteExtensionOfType(PyObject *args);
    /// callback for the deleteExtensionOfName() method
    static PyObject * staticCallback_deleteExtensionOfName (PyObject *self, PyObject *args);
    /// implementer for the deleteExtensionOfName() method
    PyObject*  deleteExtensionOfName(PyObject *args);
    /// callback for the getExtensions() method
    static PyObject * staticCallback_getExtensions (PyObject *self, PyObject *args);
    /// implementer for the getExtensions() method
    PyObject*  getExtensions(PyObject *args);
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
    Geometry *getGeometryPtr() const;

};

}  //namespace Part

#endif  // PART_GEOMETRYPY_H

