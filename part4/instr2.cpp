#include <iostream>
using namespace std;

int main() {
    const int ArSize = 20;  // 声明常量
    char name[ArSize];      // 名字保存在字符串字面量中
    char desSert[ArSize];
    cout << "enter your name:\n";
    // cin.get()有另一种变体。使用不带任何参数的cin.get()调用
    // 可读取下一个字符（即使是换行符），因此可以用它来处理换行符，为
    // 读取下一行输入做好准备
    cin.get(name, ArSize).get();  // 将输入的内容读取到一行中
    cout << "enter your favorite dessert:\n";
    cin.get(desSert, ArSize).get();
    cout << "i have some delicious " << desSert;
    cout << " for you, " << name << " .\n";

    return 0;
}
/*
% g11 instr2.cpp
% ./a.out
enter your name:
daheige
enter your favorite dessert:
golang
i have some delicious golang for you, daheige .
*/
