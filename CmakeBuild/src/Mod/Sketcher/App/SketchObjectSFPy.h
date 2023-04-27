
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef SKETCHER_SKETCHOBJECTSFPY_H
#define SKETCHER_SKETCHOBJECTSFPY_H

#include <Mod/Part/App/Part2DObjectPy.h>
#include <Mod/Sketcher/App/SketchObjectSF.h>
#include <string>


namespace Sketcher
{

//===========================================================================
// SketchObjectSFPy - Python wrapper
//===========================================================================

/** The python export class for SketchObjectSF
 */
class SketcherExport SketchObjectSFPy : public Part::Part2DObjectPy
{
protected:
    ~SketchObjectSFPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    SketchObjectSFPy(SketchObjectSF *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = SketchObjectSF*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
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
    SketchObjectSF *getSketchObjectSFPtr() const;

};

}  //namespace Sketcher

#endif  // SKETCHER_SKETCHOBJECTSFPY_H


