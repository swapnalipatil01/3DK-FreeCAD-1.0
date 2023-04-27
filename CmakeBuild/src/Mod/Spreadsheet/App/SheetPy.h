
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef SPREADSHEET_SHEETPY_H
#define SPREADSHEET_SHEETPY_H

#include <App/DocumentObjectPy.h>
#include <Mod/Spreadsheet/App/Sheet.h>
#include <string>


namespace Spreadsheet
{

//===========================================================================
// SheetPy - Python wrapper
//===========================================================================

/** The python export class for Sheet
 */
class SpreadsheetExport SheetPy : public App::DocumentObjectPy
{
protected:
    ~SheetPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType() {return &Type;}

public:
    SheetPy(Sheet *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    using PointerType = Sheet*;

    virtual PyObject *_repr();        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the set() method
    static PyObject * staticCallback_set (PyObject *self, PyObject *args);
    /// implementer for the set() method
    PyObject*  set(PyObject *args);
    /// callback for the get() method
    static PyObject * staticCallback_get (PyObject *self, PyObject *args);
    /// implementer for the get() method
    PyObject*  get(PyObject *args);
    /// callback for the getContents() method
    static PyObject * staticCallback_getContents (PyObject *self, PyObject *args);
    /// implementer for the getContents() method
    PyObject*  getContents(PyObject *args);
    /// callback for the clear() method
    static PyObject * staticCallback_clear (PyObject *self, PyObject *args);
    /// implementer for the clear() method
    PyObject*  clear(PyObject *args);
    /// callback for the clearAll() method
    static PyObject * staticCallback_clearAll (PyObject *self, PyObject *args);
    /// implementer for the clearAll() method
    PyObject*  clearAll(PyObject *args);
    /// callback for the importFile() method
    static PyObject * staticCallback_importFile (PyObject *self, PyObject *args);
    /// implementer for the importFile() method
    PyObject*  importFile(PyObject *args);
    /// callback for the exportFile() method
    static PyObject * staticCallback_exportFile (PyObject *self, PyObject *args);
    /// implementer for the exportFile() method
    PyObject*  exportFile(PyObject *args);
    /// callback for the mergeCells() method
    static PyObject * staticCallback_mergeCells (PyObject *self, PyObject *args);
    /// implementer for the mergeCells() method
    PyObject*  mergeCells(PyObject *args);
    /// callback for the splitCell() method
    static PyObject * staticCallback_splitCell (PyObject *self, PyObject *args);
    /// implementer for the splitCell() method
    PyObject*  splitCell(PyObject *args);
    /// callback for the insertColumns() method
    static PyObject * staticCallback_insertColumns (PyObject *self, PyObject *args);
    /// implementer for the insertColumns() method
    PyObject*  insertColumns(PyObject *args);
    /// callback for the removeColumns() method
    static PyObject * staticCallback_removeColumns (PyObject *self, PyObject *args);
    /// implementer for the removeColumns() method
    PyObject*  removeColumns(PyObject *args);
    /// callback for the insertRows() method
    static PyObject * staticCallback_insertRows (PyObject *self, PyObject *args);
    /// implementer for the insertRows() method
    PyObject*  insertRows(PyObject *args);
    /// callback for the removeRows() method
    static PyObject * staticCallback_removeRows (PyObject *self, PyObject *args);
    /// implementer for the removeRows() method
    PyObject*  removeRows(PyObject *args);
    /// callback for the setAlignment() method
    static PyObject * staticCallback_setAlignment (PyObject *self, PyObject *args);
    /// implementer for the setAlignment() method
    PyObject*  setAlignment(PyObject *args);
    /// callback for the getAlignment() method
    static PyObject * staticCallback_getAlignment (PyObject *self, PyObject *args);
    /// implementer for the getAlignment() method
    PyObject*  getAlignment(PyObject *args);
    /// callback for the setStyle() method
    static PyObject * staticCallback_setStyle (PyObject *self, PyObject *args);
    /// implementer for the setStyle() method
    PyObject*  setStyle(PyObject *args);
    /// callback for the getStyle() method
    static PyObject * staticCallback_getStyle (PyObject *self, PyObject *args);
    /// implementer for the getStyle() method
    PyObject*  getStyle(PyObject *args);
    /// callback for the setDisplayUnit() method
    static PyObject * staticCallback_setDisplayUnit (PyObject *self, PyObject *args);
    /// implementer for the setDisplayUnit() method
    PyObject*  setDisplayUnit(PyObject *args);
    /// callback for the setAlias() method
    static PyObject * staticCallback_setAlias (PyObject *self, PyObject *args);
    /// implementer for the setAlias() method
    PyObject*  setAlias(PyObject *args);
    /// callback for the getAlias() method
    static PyObject * staticCallback_getAlias (PyObject *self, PyObject *args);
    /// implementer for the getAlias() method
    PyObject*  getAlias(PyObject *args);
    /// callback for the getCellFromAlias() method
    static PyObject * staticCallback_getCellFromAlias (PyObject *self, PyObject *args);
    /// implementer for the getCellFromAlias() method
    PyObject*  getCellFromAlias(PyObject *args);
    /// callback for the getDisplayUnit() method
    static PyObject * staticCallback_getDisplayUnit (PyObject *self, PyObject *args);
    /// implementer for the getDisplayUnit() method
    PyObject*  getDisplayUnit(PyObject *args);
    /// callback for the setForeground() method
    static PyObject * staticCallback_setForeground (PyObject *self, PyObject *args);
    /// implementer for the setForeground() method
    PyObject*  setForeground(PyObject *args);
    /// callback for the getForeground() method
    static PyObject * staticCallback_getForeground (PyObject *self, PyObject *args);
    /// implementer for the getForeground() method
    PyObject*  getForeground(PyObject *args);
    /// callback for the setBackground() method
    static PyObject * staticCallback_setBackground (PyObject *self, PyObject *args);
    /// implementer for the setBackground() method
    PyObject*  setBackground(PyObject *args);
    /// callback for the getBackground() method
    static PyObject * staticCallback_getBackground (PyObject *self, PyObject *args);
    /// implementer for the getBackground() method
    PyObject*  getBackground(PyObject *args);
    /// callback for the setColumnWidth() method
    static PyObject * staticCallback_setColumnWidth (PyObject *self, PyObject *args);
    /// implementer for the setColumnWidth() method
    PyObject*  setColumnWidth(PyObject *args);
    /// callback for the getColumnWidth() method
    static PyObject * staticCallback_getColumnWidth (PyObject *self, PyObject *args);
    /// implementer for the getColumnWidth() method
    PyObject*  getColumnWidth(PyObject *args);
    /// callback for the setRowHeight() method
    static PyObject * staticCallback_setRowHeight (PyObject *self, PyObject *args);
    /// implementer for the setRowHeight() method
    PyObject*  setRowHeight(PyObject *args);
    /// callback for the getRowHeight() method
    static PyObject * staticCallback_getRowHeight (PyObject *self, PyObject *args);
    /// implementer for the getRowHeight() method
    PyObject*  getRowHeight(PyObject *args);
    /// callback for the touchCells() method
    static PyObject * staticCallback_touchCells (PyObject *self, PyObject *args);
    /// implementer for the touchCells() method
    PyObject*  touchCells(PyObject *args);
    /// callback for the recomputeCells() method
    static PyObject * staticCallback_recomputeCells (PyObject *self, PyObject *args);
    /// implementer for the recomputeCells() method
    PyObject*  recomputeCells(PyObject *args);
    /// callback for the getUsedCells() method
    static PyObject * staticCallback_getUsedCells (PyObject *self, PyObject *args);
    /// implementer for the getUsedCells() method
    PyObject*  getUsedCells(PyObject *args);
    /// callback for the getNonEmptyCells() method
    static PyObject * staticCallback_getNonEmptyCells (PyObject *self, PyObject *args);
    /// implementer for the getNonEmptyCells() method
    PyObject*  getNonEmptyCells(PyObject *args);
    /// callback for the getUsedRange() method
    static PyObject * staticCallback_getUsedRange (PyObject *self, PyObject *args);
    /// implementer for the getUsedRange() method
    PyObject*  getUsedRange(PyObject *args);
    /// callback for the getNonEmptyRange() method
    static PyObject * staticCallback_getNonEmptyRange (PyObject *self, PyObject *args);
    /// implementer for the getNonEmptyRange() method
    PyObject*  getNonEmptyRange(PyObject *args);
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
    Sheet *getSheetPtr() const;

};

}  //namespace Spreadsheet

#endif  // SPREADSHEET_SHEETPY_H


