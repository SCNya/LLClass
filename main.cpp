//ver. 1.0 by AEffect 20.12.12 20:20
#include "list.h"

int main()
{
    Bundle* date = new Bundle("xXAsusXx");
    List* alpha = new List;
    alpha->add(date);
    date = new Bundle("pi = 3.141592");
    alpha->add(date);
    date = new Bundle("ICE");
    alpha->add(date);
    date = new Bundle("ACE");
    alpha->add(date);
    date = new Bundle("CAKE");
    alpha->add(date);
    date = new Bundle("MAKE");
    alpha->add(date);
    alpha->show_all();
    cout << "//" << endl;
    alpha->next();
    alpha->show();
    cout << "HAKE" << endl;
    date = new Bundle("HAKE");
    alpha->add_here(date);
    alpha->next();
    alpha->del_here();
    cout << "//" << endl;
    alpha->show_all();
    return 0;
}

