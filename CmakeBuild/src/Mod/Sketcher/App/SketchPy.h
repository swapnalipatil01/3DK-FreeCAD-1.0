
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef SKETCHER_SKETCHPY_H
#define SKETCHER_SKETCHPY_H

#include <Base/PersistencePy.h>
#include <Mod/Sketcher/App/Sketch.h>
#include <string>


namespace Sketcher
{

//===========================================================================
// SketchPy - Python wrapper
//===========================================================================

/** The python export class for Sketch
 */
class SketcherExport SketchPy : public Base::PersistencePy
{
protected:
    ~SketchPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    SketchPy(Sketch *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Sketch*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the solve() method
    static PyObject * staticCallback_solve (PyObject *self, PyObject *args);
    /// implementer for the solve() method
    PyObject*  solve(PyObject *args);
    /// callback for the addGeometry() method
    static PyObject * staticCallback_addGeometry (PyObject *self, PyObject *args);
    /// implementer for the addGeometry() method
    PyObject*  addGeometry(PyObject *args);
    /// callback for the addConstraint() method
    static PyObject * staticCallback_addConstraint (PyObject *self, PyObject *args);
    /// implementer for the addConstraint() method
    PyObject*  addConstraint(PyObject *args);
    /// callback for the clear() method
    static PyObject * staticCallback_clear (PyObject *self, PyObject *args);
    /// implementer for the clear() method
    PyObject*  clear(PyObject *args);
    /// callback for the movePoint() method
    static PyObject * staticCallback_movePoint (PyObject *self, PyObject *args);
    /// implementer for the movePoint() method
    PyObject*  movePoint(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Constraint attribute
    static PyObject * staticCallback_getConstraint (PyObject *self, void *closure);
    /// getter for the Constraint attribute
    Py::Long getConstraint() const;
    /// setter callback for the Constraint attribute
    static int staticCallback_setConstraint (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Constraint is read only!
    ///getter callback for the Conflicts attribute
    static PyObject * staticCallback_getConflicts (PyObject *self, void *closure);
    /// getter for the Conflicts attribute
    Py::Tuple getConflicts() const;
    /// setter callback for the Conflicts attribute
    static int staticCallback_setConflicts (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Conflicts is read only!
    ///getter callback for the Redundancies attribute
    static PyObject * staticCallback_getRedundancies (PyObject *self, void *closure);
    /// getter for the Redundancies attribute
    Py::Tuple getRedundancies() const;
    /// setter callback for the Redundancies attribute
    static int staticCallback_setRedundancies (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Redundancies is read only!
    ///getter callback for the Geometries attribute
    static PyObject * staticCallback_getGeometries (PyObject *self, void *closure);
    /// getter for the Geometries attribute
    Py::Tuple getGeometries() const;
    /// setter callback for the Geometries attribute
    static int staticCallback_setGeometries (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Geometries is read only!
    ///getter callback for the Shape attribute
    static PyObject * staticCallback_getShape (PyObject *self, void *closure);
    /// getter for the Shape attribute
    Py::Object getShape() const;
    /// setter callback for the Shape attribute
    static int staticCallback_setShape (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Shape is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Sketch *getSketchPtr() const;

};

}  //namespace Sketcher

#endif  // SKETCHER_SKETCHPY_H


