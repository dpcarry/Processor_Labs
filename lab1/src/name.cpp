#include "name.hpp"
#include <iostream>
#include <string>
#include "name.hpp"
using namespace std;

string askForName()
{
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    return name;
}
