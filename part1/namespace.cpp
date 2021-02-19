#include <iostream>
#include "namespace.h"

using namespace std;

int main()
{
    mycode::foo();
}

void mycode::foo()
{
    cout << "foo call" << endl;
    cout << "kHelp: " << mycode::kHelp << endl;
}