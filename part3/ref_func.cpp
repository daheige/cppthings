#include <iostream>
#include <string>

using namespace std;

// 传引用参数
void get_age(int &age);
void get_name(string &name);

// 函数中调用其他函数
void order(int &a, int &b);
void swap_value(int &a, int &b);

int main()
{
    int age;
    string name;

    get_age(age);
    get_name(name);

    cout << "your name is: " << name << "your age is:" << age << endl;

    int a = 12, b = 10;
    order(a, b);

    cout << "order(a,b) after a,b is " << a << " " << b << endl;
    return 0;
}

void get_age(int &age)
{
    cout << "enter your age: \n";
    cin >> age;     // 把输入的age放入age,赋值
    age = age + 10; // 这里发生了改变
}

void get_name(string &name)
{
    cout << "enter your name: \n";
    cin >> name;
}

void order(int &a, int &b)
{
    if (a > b)
    {
        swap_value(a, b);
    }

    a = a + 1;
    b = b + 2;
}

void swap_value(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
