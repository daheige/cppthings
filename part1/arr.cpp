#include <iostream>
#include <array>  // 导入array header头
#include <vector> // 导入动态数组的header头，其实就是切片类型
using namespace std;
struct Point
{
    double mX, mY, mZ;
};

int main()
{
    // c语言风格的数组
    int arr[] = {1, 2, 3, 4};
    cout << "arr[0]=" << arr[0] << endl;

    // c++数组风格
    array<int, 3> a = {9, 8, 7};
    cout << "array size is " << a.size() << endl;
    cout << "first value is " << a[0] << endl;

    // 动态数组vector
    vector<string> names = {"daheige", "golang", "c++"};
    names.push_back("js");
    names.push_back("php");
    cout << "size is " << names.size() << endl; // 动态数组，在go中称作为slices
    cout << "first value is " << names[0] << endl;

    // 结构化绑定，变量自动推导和解构
    // 结构化绑定声明的变量数量必须和右边的数量一致
    // c++17 就不会抛出警告，否则抛出
    // arr.cpp:26:10: warning: decomposition declarations are a C++17 extension
    // c++17编译方式 g17 -o arr.out arr.cpp

    auto [x, y, z] = a;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;

    Point p;
    p.mX = 1;
    p.mY = 1.2;
    p.mZ = 3.2;

    // 自动解构结构体中的变量
    auto [m, n, q] = p;
    cout << "m = " << m << "n = " << n << "q = " << q << endl;

    // for 基于区间的for迭代
    vector<int> arr2 = {1, 2, 3};
    for (int i : arr2)
    {
        cout << "current i = " << i << endl;
    }

    // 智能指针使用
    // make_unique<type>();方式声明一个unique_ptr，它是一个通用类型的指针，可以指向任意类型的内存
    // <>里面必须指定具体的内存类型
    auto p2 = make_unique<Point>();
    p2->mX = 1;
    cout << p2->mX << endl;

    // shared_ptr允许数据的分布式"所有权"，采用递增计数方式，数据同时有多个拥有者
    // 当引用次数变成0时候，表示数据不再有任何拥有者，就会释放指针引用的对象
    auto p3 = make_shared<Point>();
    p3->mX = 12.2;
    if(p3){
        cout << "mx = "<< p3->mX << endl;
    }

    return 0;
}
