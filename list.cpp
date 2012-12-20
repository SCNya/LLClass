#include "list.h"

List::List()
{
    new_cell = new Cell();
}

List::~List()
{
    delete new_cell;
    delete first;
    delete temp_first;
}

void List::add(Bundle* data)
{
    new_cell = new_cell->add(data, new_cell);
    if(!first) temp_first = first = new_cell;
}

void List::add_here(Bundle* data)
{
    temp_first = temp_first->add(data, temp_first);
}

void List::del()
{
    new_cell = new_cell->del();
}

void List::del_here()
{
    temp_first = temp_first->del();
}

void List::show_all()
{
    first->show_all(first);
}

void List::show()
{
    temp_first->show();
}

void List::next()
{
    temp_first = temp_first->next();
}

void List::back()
{
    temp_first = temp_first->back();
}
