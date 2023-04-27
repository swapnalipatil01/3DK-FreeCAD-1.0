
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_DRAWSVGTEMPLATEPY_H
#define TECHDRAW_DRAWSVGTEMPLATEPY_H

#include <DrawTemplatePy.h>
#include <Mod/TechDraw/App/DrawSVGTemplate.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// DrawSVGTemplatePy - Python wrapper
//===========================================================================

/** The python export class for DrawSVGTemplate
 */
class TechDrawExport DrawSVGTemplatePy : public TechDraw::DrawTemplatePy
{
protected:
    ~DrawSVGTemplatePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    DrawSVGTemplatePy(DrawSVGTemplate *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = DrawSVGTemplate*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the getEditFieldContent() method
    static PyObject * staticCallback_getEditFieldContent (PyObject *self, PyObject *args);
    /// implementer for the getEditFieldContent() method
    PyObject*  getEditFieldContent(PyObject *args);
    /// callback for the setEditFieldContent() method
    static PyObject * staticCallback_setEditFieldContent (PyObject *self, PyObject *args);
    /// implementer for the setEditFieldContent() method
    PyObject*  setEditFieldContent(PyObject *args);
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
    DrawSVGTemplate *getDrawSVGTemplatePtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_DRAWSVGTEMPLATEPY_H


