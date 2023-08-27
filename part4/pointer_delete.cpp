#include <cstring>
#include <iostream>
using namespace std;
char* getname();

int main() {
    char* name;
    name = getname();
    cout << name << " at " << (int*)name << endl;
    delete[] name;  // 释放name内存空间

    name = getname();
    cout << name << " at " << (int*)name << endl;
    delete[] name;  // 释放name内存空间

    return 0;
}

char* getname() {
    char tmp[80];
    cout << "enter last name: ";
    cin >> tmp;
    char* pn = new char[strlen(tmp) + 1];  // 创建一个字符串指针

    // 将tmp字符串复制到pn
    // 使用new请求合适的字节数来完成了这样的工作
    strcpy(pn, tmp);

    // 函数返回pn，这是字符串副本的地址
    return pn;  // 返回char* 指针
}

/*
% g11 pointer_delete.cpp
./a.out
enter last name: daheige
daheige at 0x600000334000
enter last name: heige
heige at 0x600000330000
*/