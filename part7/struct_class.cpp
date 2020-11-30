#include <iostream>
#include <string>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

struct Person
{
    string Name;
    int Age;
    Date Birthday;
};

// 声明类
class DayOfYear
{
public:
    void output();
    void setYear(int year); // 定义方法，没有返回值
    int getYear();          // 定义方法
    int month;
    int day;

private:
    int year; // 定义私有变量
};

// 定义类的方法
void DayOfYear::output()
{
    cout << "month = " << month
         << ", day = " << day << endl;
    cout << "year is" << year << endl;
}

void DayOfYear::setYear(int y)
{
    year = y;
}

int DayOfYear::getYear()
{
    return year;
}

int main()
{
    Person p;
    p.Name = "heige";
    p.Age = 29;
    p.Birthday.month = 9;
    p.Birthday.year = 2020;
    p.Birthday.day = 29;
    cout << "name is " << p.Name << " age is "
         << p.Age << endl;
    cout << "birthday is: " << p.Birthday.year << endl;
    cout << "month is " << p.Birthday.month << endl;

    DayOfYear d;
    d.month = 10;
    d.day = 25;
    d.output(); // call method

    d.setYear(30);
    cout << "year is " << d.getYear();

    return 0;
}