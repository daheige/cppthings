#include <iostream>
using namespace std;

struct Circle
{
    int x, y;
    double radius;
};

class CircleClass
{
public:
    //定义类的时候，进行构造函数赋值操作
    CircleClass(int x, int y, double r) : mX(x), mY(y), mR(r){};

private:
    int mX, mY;
    double mR;
    int mArray[4]; // 动态分配4个元素的int数组
};

int main()
{
    // 统一初始化class
    CircleClass mycircle = {12, 13, 125};
    CircleClass mycircle2{12, 11, 10}; // c11+之后建议用{...}统一初始化

    // 统一初始化基本类型
    int x(1);
    int y(12);
    cout << "x,y = " << x << y << endl;

    // 统一初始化动态分配数组
    int *pArr = new int[4]{10, 1, 2, 3};
    cout << "p first value: " << pArr[0] << endl;

    return 0;
}