
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef DATA_COMPLEXGEODATAPY_H
#define DATA_COMPLEXGEODATAPY_H

#include <Base/PersistencePy.h>
#include <App/ComplexGeoData.h>
#include <string>


namespace Data
{

//===========================================================================
// ComplexGeoDataPy - Python wrapper
//===========================================================================

/** The python export class for ComplexGeoData
 */
class DataExport ComplexGeoDataPy : public Base::PersistencePy
{
protected:
    ~ComplexGeoDataPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    ComplexGeoDataPy(ComplexGeoData *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = ComplexGeoData*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the getElementTypes() method
    static PyObject * staticCallback_getElementTypes (PyObject *self, PyObject *args);
    /// implementer for the getElementTypes() method
    PyObject*  getElementTypes(PyObject *args);
    /// callback for the countSubElements() method
    static PyObject * staticCallback_countSubElements (PyObject *self, PyObject *args);
    /// implementer for the countSubElements() method
    PyObject*  countSubElements(PyObject *args);
    /// callback for the getFacesFromSubElement() method
    static PyObject * staticCallback_getFacesFromSubElement (PyObject *self, PyObject *args);
    /// implementer for the getFacesFromSubElement() method
    PyObject*  getFacesFromSubElement(PyObject *args);
    /// callback for the getLinesFromSubElement() method
    static PyObject * staticCallback_getLinesFromSubElement (PyObject *self, PyObject *args);
    /// implementer for the getLinesFromSubElement() method
    PyObject*  getLinesFromSubElement(PyObject *args);
    /// callback for the getPoints() method
    static PyObject * staticCallback_getPoints (PyObject *self, PyObject *args);
    /// implementer for the getPoints() method
    PyObject*  getPoints(PyObject *args);
    /// callback for the getLines() method
    static PyObject * staticCallback_getLines (PyObject *self, PyObject *args);
    /// implementer for the getLines() method
    PyObject*  getLines(PyObject *args);
    /// callback for the getFaces() method
    static PyObject * staticCallback_getFaces (PyObject *self, PyObject *args);
    /// implementer for the getFaces() method
    PyObject*  getFaces(PyObject *args);
    /// callback for the applyTranslation() method
    static PyObject * staticCallback_applyTranslation (PyObject *self, PyObject *args);
    /// implementer for the applyTranslation() method
    PyObject*  applyTranslation(PyObject *args);
    /// callback for the applyRotation() method
    static PyObject * staticCallback_applyRotation (PyObject *self, PyObject *args);
    /// implementer for the applyRotation() method
    PyObject*  applyRotation(PyObject *args);
    /// callback for the transformGeometry() method
    static PyObject * staticCallback_transformGeometry (PyObject *self, PyObject *args);
    /// implementer for the transformGeometry() method
    PyObject*  transformGeometry(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the BoundBox attribute
    static PyObject * staticCallback_getBoundBox (PyObject *self, void *closure);
    /// getter for the BoundBox attribute
    Py::Object getBoundBox() const;
    /// setter callback for the BoundBox attribute
    static int staticCallback_setBoundBox (PyObject *self, PyObject *value, void *closure);
    // no setter method,  BoundBox is read only!
    ///getter callback for the CenterOfGravity attribute
    static PyObject * staticCallback_getCenterOfGravity (PyObject *self, void *closure);
    /// getter for the CenterOfGravity attribute
    Py::Object getCenterOfGravity() const;
    /// setter callback for the CenterOfGravity attribute
    static int staticCallback_setCenterOfGravity (PyObject *self, PyObject *value, void *closure);
    // no setter method,  CenterOfGravity is read only!
    ///getter callback for the Placement attribute
    static PyObject * staticCallback_getPlacement (PyObject *self, void *closure);
    /// getter for the Placement attribute
    Py::Object getPlacement() const;
    /// setter callback for the Placement attribute
    static int staticCallback_setPlacement (PyObject *self, PyObject *value, void *closure);
    /// setter for the Placement attribute
    void setPlacement(Py::Object arg);
    ///getter callback for the Tag attribute
    static PyObject * staticCallback_getTag (PyObject *self, void *closure);
    /// getter for the Tag attribute
    Py::Int getTag() const;
    /// setter callback for the Tag attribute
    static int staticCallback_setTag (PyObject *self, PyObject *value, void *closure);
    /// setter for the Tag attribute
    void setTag(Py::Int arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    ComplexGeoData *getComplexGeoDataPtr() const;

};

}  //namespace Data

#endif  // DATA_COMPLEXGEODATAPY_H

