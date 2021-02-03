#include <iostream>
#include <array> // 导入array header头
#include <vector>
using namespace std;

int main()
{
    array<int, 3> a = {9, 8, 7};
    cout << "array size is " << a.size() << endl;
    cout << "first value is " << a[0] << endl;

    vector<string> names = {"daheige", "golang", "c++"};
    names.push_back("php");
    cout << "size is " << names.size() << endl; // 动态数组，在go中称作为slices
    cout << "first value is " << names[0] << endl;

    //结构化绑定，变量自动推导和解构
    // 结构化绑定声明的变量数量必须和右边的数量一致
    auto [x, y, z] = a;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;

    return 0;
}