#include <iostream>
using namespace std;

const int Price = 10;
enum Color
{
    Red = 1,
    Blue = 2,
    Green,
};

// 强类型的enum class枚举，线性安全
enum class PieceType : unsigned long
{
    King = 1,
    Queen,
    Rook = 10,
    Pawn,
};

struct Person
{
    int age;
    string name;
    int employeeNumber;
    int salary;
};

int main()
{
    int a = 8;
    cout << "a is " << a << endl;

    cout << "color: " << Color::Green << endl; // color: 3

    unsigned long b = 1;
    PieceType piece = PieceType::King;
    if (piece == PieceType::King)
    {
        cout << "piece is valid" << endl;
    }

    Person p;
    p.name = "daheige";
    p.age = 30;
    p.employeeNumber = 1;
    p.salary = 10000;

    cout << "person name is: " << p.name
         << "age is: " << p.age
         << endl;

    return 0;
}