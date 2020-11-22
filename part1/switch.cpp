#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "enter your grade: ";
    cin >> grade;

    switch (grade)
    {
    case 'a':
        cout << "grade is high" << endl;
        break;
    case 'b':
        cout << "grade is middle" << endl;
        break;
    default:
        break;
    }
}