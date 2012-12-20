#include "bundle.h"

Bundle::Bundle(string s):
my_s(s)
{
}

Bundle::~Bundle()
{
}

void Bundle::show()
{
    cout << endl << my_s << endl;
}
