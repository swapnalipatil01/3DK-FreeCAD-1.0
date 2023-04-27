
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PARTDESIGN_FEATUREPY_H
#define PARTDESIGN_FEATUREPY_H

#include <Mod/Part/App/PartFeaturePy.h>
#include <Mod/PartDesign/App/Feature.h>
#include <string>


namespace PartDesign
{

//===========================================================================
// FeaturePy - Python wrapper
//===========================================================================

/** The python export class for Feature
 */
class PartDesignExport FeaturePy : public Part::PartFeaturePy
{
protected:
    ~FeaturePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    FeaturePy(Feature *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Feature*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the getBaseObject() method
    static PyObject * staticCallback_getBaseObject (PyObject *self, PyObject *args);
    /// implementer for the getBaseObject() method
    PyObject*  getBaseObject(PyObject *args);
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
    Feature *getFeaturePtr() const;

};

}  //namespace PartDesign

#endif  // PARTDESIGN_FEATUREPY_H


