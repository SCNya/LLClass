#ifndef CELL_H
#define CELL_H
#include "bundle.h"

class Cell
{
public:
    Cell();
    Cell(Bundle *);
    Cell(Bundle *, Cell *, Cell *);
    ~Cell();
    Cell * add(Bundle *, Cell *);
    Cell * del();
    Cell *next();
    Cell * back();
    void show_all(Cell *);
    void show();
    void set_back(Cell *);
    void set_next(Cell *);
private:
    Bundle * my_data;
    Cell * my_next;
    Cell * my_back;
};

#endif // CELL_H
