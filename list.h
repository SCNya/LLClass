#ifndef LIST_H
#define LIST_H
#include "cell.h"

class List
{
public:
    List();
    ~List();
    void add(Bundle*);
    void add_here(Bundle*);
    void del();
    void del_here();
    void show_all();
    void show();
    void next();
    void back();
private:
    Cell * new_cell;
    Cell * first;
    Cell * temp_first;
};

#endif // LIST_H
