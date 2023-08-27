#include <iostream>
using namespace std;

int main() {
    const int ArSize = 20;  // 声明常量
    char name[ArSize];      // 名字保存在字符串字面量中
    char desSert[ArSize];
    cout << "enter your name:\n";

    // getline()函数每次读取一行。它通过换行符来确定行尾
    cin.getline(name, ArSize);  // 将输入的内容读取到一行中
    cout << "enter your favorite dessert:\n";
    cin.getline(desSert, ArSize);
    cout << "i have some delicious " << desSert;
    cout << " for you, " << name << " .\n";

    // cin.get()有另一种变体。使用不带任何参数的cin.get()调用
    // 可读取下一个字符（即使是换行符），因此可以用它来处理换行符，为
    // 读取下一行输入做好准备
    char name2[ArSize];
    cout << "enter other name:\n";
    cin.get(name2, ArSize);
    cout << "other name: " << name2 << endl;

    return 0;
}

/*
% g11 instr.cpp
% ./a.out
enter your name:
daheige
enter your favorite dessert:
golang c++
i have some delicious golang c++ for you, daheige .
enter other name:
heige
other name: heige
*/
