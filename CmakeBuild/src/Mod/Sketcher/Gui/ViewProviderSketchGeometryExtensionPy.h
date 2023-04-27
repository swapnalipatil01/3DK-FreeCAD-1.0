
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef SKETCHERGUI_VIEWPROVIDERSKETCHGEOMETRYEXTENSIONPY_H
#define SKETCHERGUI_VIEWPROVIDERSKETCHGEOMETRYEXTENSIONPY_H

#include <Mod/Part/App/GeometryExtensionPy.h>
#include <Mod/Sketcher/Gui/ViewProviderSketchGeometryExtension.h>
#include <string>


namespace SketcherGui
{

//===========================================================================
// ViewProviderSketchGeometryExtensionPy - Python wrapper
//===========================================================================

/** The python export class for ViewProviderSketchGeometryExtension
 */
class SketcherGuiExport ViewProviderSketchGeometryExtensionPy : public Part::GeometryExtensionPy
{
protected:
    ~ViewProviderSketchGeometryExtensionPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    ViewProviderSketchGeometryExtensionPy(ViewProviderSketchGeometryExtension *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = ViewProviderSketchGeometryExtension*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the VisualLayerId attribute
    static PyObject * staticCallback_getVisualLayerId (PyObject *self, void *closure);
    /// getter for the VisualLayerId attribute
    Py::Long getVisualLayerId() const;
    /// setter callback for the VisualLayerId attribute
    static int staticCallback_setVisualLayerId (PyObject *self, PyObject *value, void *closure);
    /// setter for the VisualLayerId attribute
    void setVisualLayerId(Py::Long arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    ViewProviderSketchGeometryExtension *getViewProviderSketchGeometryExtensionPtr() const;

};

}  //namespace SketcherGui

#endif  // SKETCHERGUI_VIEWPROVIDERSKETCHGEOMETRYEXTENSIONPY_H


