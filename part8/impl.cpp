#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person();
    void set_name(string name);
    string get_name() const;
    void output();

private:
    string name;
    int age;
};

class Stu : public Person
{
public:
    Stu();
    int get_age();
    void set_number(const int &num);
    void output(); // 重写方法output

private:
    int number; // 新增了一个成员number
    int age;
    string name;
};

int main()
{
    Person p;
    cout << p.get_name() << endl;
    p.set_name("heige313");
    p.output();

    Stu s;
    cout << "current name: " << s.get_name() << endl;
    cout << "age: " << s.get_age() << endl;
    s.set_name("dahei"); // 这里其实调用的父类的方法set_name
    s.set_number(123);
    s.output();
}

// 初始化，构造函数
Person::Person()
{
    name = "heige";
    age = 12;
}

void Person::set_name(string n)
{
    name = n;
}

// 当前的这个name只能返回，不能被修改
string Person::get_name() const
{
    return name;
}

void Person::output()
{
    cout << "call super output" << endl;
    cout << "name is: " << name << endl;
    cout << "age is: " << age << endl;
}

void Stu::set_number(const int &n)
{
    number = n;
}

Stu::Stu()
{
    number = 1;
}

int Stu::get_age()
{
    return age;
}

void Stu::output()
{
    Person::output();
    cout << "current number: " << number << endl;
}