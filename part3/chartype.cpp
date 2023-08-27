#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "please input a char: " << endl;
    cin >> ch;
    cout << "hola!";
    cout << "thank you for the " << ch << " character" << endl;

    return 0;
}
/*
% g11 chartype.cpp
% ./a.out
please input a char:
a
hola!thank you for the a character
*/
