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
    std::cout << "function name: " << __FUNCTION__ << std::endl;
    std::cout << "function name: " << __func__ << std::endl;
    std::cout << myStr << std::endl;
}
