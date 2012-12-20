#include "cell.h"

Cell::Cell():
    my_back(this)
{
}

Cell::Cell(Bundle * data):
    my_data(data)
{
}

Cell::Cell(Bundle * data, Cell * next, Cell * back):
    my_data(data),
    my_next(next),
    my_back(back)
{
}

Cell::~Cell()
{
    delete my_data;
    delete my_next;
    delete my_back;
}

void Cell::show_all(Cell * first)
{
    my_data->show();
    if(my_next != first)
    my_next->show_all(first);
}

void Cell::show()
{
    my_data->show();
}

Cell * Cell::next()
{
    return my_next;
}

Cell * Cell::back()
{
    return my_back;
}

void Cell::set_back(Cell * back)
{
  my_back = back;
}

void Cell::set_next(Cell * next)
{
  my_next = next;
}

Cell * Cell::add(Bundle *data, Cell * back)
{
   if (my_next == 0)
    {
    Cell * cell = new Cell(data);
    cell->my_next = cell;
    cell->my_back = cell;
    return cell;
    }
    else
    {
       if (my_back->next() == my_next)
       {
           Cell * cell = new Cell(data, my_next, my_next);
           my_back = my_next = cell;
           return my_next;
       }
       else
       {
           Cell * cell = new Cell(data, my_next, back);
           my_next->set_back(cell);
           my_next = cell;
           return my_next;
       }
    }
}

Cell * Cell::del()
{
    my_next->set_back(my_back);
    my_back->set_next(my_next);
    delete my_data;
    my_data = 0;
    return my_back;
}
