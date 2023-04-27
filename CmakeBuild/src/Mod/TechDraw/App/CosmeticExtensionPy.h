
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_COSMETICEXTENSIONPY_H
#define TECHDRAW_COSMETICEXTENSIONPY_H

#include <App/DocumentObjectExtensionPy.h>
#include <Mod/TechDraw/App/CosmeticExtension.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// CosmeticExtensionPy - Python wrapper
//===========================================================================

/** The python export class for CosmeticExtension
 */
class TechDrawExport CosmeticExtensionPy : public App::DocumentObjectExtensionPy
{
protected:
    ~CosmeticExtensionPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    CosmeticExtensionPy(CosmeticExtension *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = CosmeticExtension*;

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
    CosmeticExtension *getCosmeticExtensionPtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_COSMETICEXTENSIONPY_H


