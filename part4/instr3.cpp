#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string desSert;

    cout << "enter your name:\n";
    cin >> name;  // 将输入的内容读取到name

    cout << "enter your favorite dessert:\n";
    cin >> desSert;

    cout << "i have some delicious " << desSert;
    cout << " for you, " << name << ".\n";

    return 0;
}

/*
% g11 instr3.cpp
% ./a.out
enter your name:
daheige
enter your favorite dessert:
golang
i have some delicious golang for you, daheige.
*/