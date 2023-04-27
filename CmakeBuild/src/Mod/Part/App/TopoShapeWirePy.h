
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_TOPOSHAPEWIREPY_H
#define PART_TOPOSHAPEWIREPY_H

#include <Mod/Part/App/TopoShapePy.h>
#include <Mod/Part/App/TopoShape.h>
#include <string>


namespace Part
{

//===========================================================================
// TopoShapeWirePy - Python wrapper
//===========================================================================

/** The python export class for TopoShape
 */
class PartExport TopoShapeWirePy : public Part::TopoShapePy
{
protected:
    ~TopoShapeWirePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    TopoShapeWirePy(TopoShape *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = TopoShape*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the makeOffset() method
    static PyObject * staticCallback_makeOffset (PyObject *self, PyObject *args);
    /// implementer for the makeOffset() method
    PyObject*  makeOffset(PyObject *args);
    /// callback for the add() method
    static PyObject * staticCallback_add (PyObject *self, PyObject *args);
    /// implementer for the add() method
    PyObject*  add(PyObject *args);
    /// callback for the fixWire() method
    static PyObject * staticCallback_fixWire (PyObject *self, PyObject *args);
    /// implementer for the fixWire() method
    PyObject*  fixWire(PyObject *args);
    /// callback for the makeHomogenousWires() method
    static PyObject * staticCallback_makeHomogenousWires (PyObject *self, PyObject *args);
    /// implementer for the makeHomogenousWires() method
    PyObject*  makeHomogenousWires(PyObject *args);
    /// callback for the makePipe() method
    static PyObject * staticCallback_makePipe (PyObject *self, PyObject *args);
    /// implementer for the makePipe() method
    PyObject*  makePipe(PyObject *args);
    /// callback for the makePipeShell() method
    static PyObject * staticCallback_makePipeShell (PyObject *self, PyObject *args);
    /// implementer for the makePipeShell() method
    PyObject*  makePipeShell(PyObject *args);
    /// callback for the makeEvolved() method
    static PyObject * staticCallback_makeEvolved (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the makeEvolved() method
    PyObject*  makeEvolved(PyObject *args, PyObject *kwd);
    /// callback for the approximate() method
    static PyObject * staticCallback_approximate (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the approximate() method
    PyObject*  approximate(PyObject *args, PyObject *kwd);
    /// callback for the discretize() method
    static PyObject * staticCallback_discretize (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the discretize() method
    PyObject*  discretize(PyObject *args, PyObject *kwd);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Mass attribute
    static PyObject * staticCallback_getMass (PyObject *self, void *closure);
    /// getter for the Mass attribute
    Py::Object getMass() const;
    /// setter callback for the Mass attribute
    static int staticCallback_setMass (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Mass is read only!
    ///getter callback for the CenterOfMass attribute
    static PyObject * staticCallback_getCenterOfMass (PyObject *self, void *closure);
    /// getter for the CenterOfMass attribute
    Py::Object getCenterOfMass() const;
    /// setter callback for the CenterOfMass attribute
    static int staticCallback_setCenterOfMass (PyObject *self, PyObject *value, void *closure);
    // no setter method,  CenterOfMass is read only!
    ///getter callback for the MatrixOfInertia attribute
    static PyObject * staticCallback_getMatrixOfInertia (PyObject *self, void *closure);
    /// getter for the MatrixOfInertia attribute
    Py::Object getMatrixOfInertia() const;
    /// setter callback for the MatrixOfInertia attribute
    static int staticCallback_setMatrixOfInertia (PyObject *self, PyObject *value, void *closure);
    // no setter method,  MatrixOfInertia is read only!
    ///getter callback for the StaticMoments attribute
    static PyObject * staticCallback_getStaticMoments (PyObject *self, void *closure);
    /// getter for the StaticMoments attribute
    Py::Object getStaticMoments() const;
    /// setter callback for the StaticMoments attribute
    static int staticCallback_setStaticMoments (PyObject *self, PyObject *value, void *closure);
    // no setter method,  StaticMoments is read only!
    ///getter callback for the PrincipalProperties attribute
    static PyObject * staticCallback_getPrincipalProperties (PyObject *self, void *closure);
    /// getter for the PrincipalProperties attribute
    Py::Dict getPrincipalProperties() const;
    /// setter callback for the PrincipalProperties attribute
    static int staticCallback_setPrincipalProperties (PyObject *self, PyObject *value, void *closure);
    // no setter method,  PrincipalProperties is read only!
    ///getter callback for the OrderedEdges attribute
    static PyObject * staticCallback_getOrderedEdges (PyObject *self, void *closure);
    /// getter for the OrderedEdges attribute
    Py::List getOrderedEdges() const;
    /// setter callback for the OrderedEdges attribute
    static int staticCallback_setOrderedEdges (PyObject *self, PyObject *value, void *closure);
    // no setter method,  OrderedEdges is read only!
    ///getter callback for the Continuity attribute
    static PyObject * staticCallback_getContinuity (PyObject *self, void *closure);
    /// getter for the Continuity attribute
    Py::String getContinuity() const;
    /// setter callback for the Continuity attribute
    static int staticCallback_setContinuity (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Continuity is read only!
    ///getter callback for the OrderedVertexes attribute
    static PyObject * staticCallback_getOrderedVertexes (PyObject *self, void *closure);
    /// getter for the OrderedVertexes attribute
    Py::List getOrderedVertexes() const;
    /// setter callback for the OrderedVertexes attribute
    static int staticCallback_setOrderedVertexes (PyObject *self, PyObject *value, void *closure);
    // no setter method,  OrderedVertexes is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    TopoShape *getTopoShapePtr() const;

};

}  //namespace Part

#endif  // PART_TOPOSHAPEWIREPY_H


