// Created by daheige on 2021/5/30.
#include <iostream>
#include <string>
using namespace std;
// const用法

// 1.使用const定义常量,需指定类型
const int MAX = 12;

// 2.使用const保护参数,防止其他代码修改变量,当函数里面改变了参数，就会编译不通过

// 这里通过传递参数的引用，通过const修饰，函数里面是不能更改参数的值
// 当参数调用的时候*str会自动转化为const string* str
// const引用参数的效率：传递参数传递的是愿数据的指针，不需要复制数据本身，而且愿数据也不会修改
void print(const std::string* str);
void print(const std::string* str){
    std::cout << "str is "<< *str << std::endl;
}

// 3.其他用户，返回值修饰const
const double get_val();
const double get_val() {
    return 1.2;
}

const string message = "hello,world";

const string& foo(){
    return message;
}

int main(){
    cout << "max is "<< MAX << endl;

    string str = "hello,world";
    print(&str);

    // 类型自动推导
    // 1、auto类型自动推导，把结果存在变量中，auto去除了引用和const限定符，所以建立了副本
    auto x = foo();
    cout << "x = "<< x << endl;

    const auto& f2 = foo(); // const引用
    cout << "f2 = "<< f2 << endl;

    // 2、decltype 类型自动推导
    int m = 0;
    decltype(m) y = 123;
    cout << "y = " << y << endl;

    decltype(foo()) f3 = foo();
    cout << "f3 foo = "<< f3 << endl;
    return 0;
}

