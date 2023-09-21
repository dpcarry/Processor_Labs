#include "name.hpp"
#include <iostream>

int main()
{
    string name = askForName();
    cout << "Hello, " << name << "!" << endl;
    return 0;
}