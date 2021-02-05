#include <iostream>
#include <string>
using namespace std;

const string &foo();

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

const string name = "daheige";
const string &foo()
{
    return name;
}

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

    auto x = 123; // int type 自动推断变量类型
    cout << "x = " << x << endl;
    auto name = foo(); // auto去除了引用和const限定符，name是string类型，所以建立了一个副本
    // 如果希望name是一个const引用，就可以明确将它建立为一个引用，并标记为const
    cout << "name = " << name << endl;

    const auto &f2 = foo(); // auto & 或const auto&不需要副本
    cout << "name of f2 = " << f2 << endl;

    decltype(foo()) f3 = foo(); // decltype未去除引用和const限定符，导致f3的类型是const string&，不会生成副本
    cout << "name of f3 = " << f3 << endl;

    return 0;
}
