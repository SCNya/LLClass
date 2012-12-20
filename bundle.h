#ifndef BUNDLE_H
#define BUNDLE_H
#include <iostream>

using namespace std;

class Bundle
{
public:
    Bundle(string);
    ~Bundle();
    void show();
private:
    string my_s;
};

#endif // BUNDLE_H
