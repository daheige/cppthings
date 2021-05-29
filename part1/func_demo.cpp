// Created by daheige on 2021/2/19.
#include <iostream>
#include <string>
void printStr(const std::string &myStr);
int main()
{
    printStr("heige");
    std::string s = "heige123";
    printStr(s);
}

// const引用传递参数
void printStr(const std::string &myStr)
{
    std::cout << myStr << std::endl;
}
