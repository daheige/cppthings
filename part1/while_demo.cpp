#include <iostream>
#include <array>
#include <initializer_list>
#include <string>

using namespace std;

int makeSum(initializer_list<int> lst);
int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << "i = " << i << endl;
        i++;
    }

    int m = 10;
    do
    {
        cout << "this index is " << m << endl;
        --m;
    } while (m > 0);

    for (int i = 0; i < 5; i++)
    {
        cout << "i = " << i << endl;
    }

    cout << "this index is " << i << endl; // 5

    // for 区间迭代循环
    array<int, 3> arr = {1, 2, 3};
    for (int i : arr)
    {
        cout << "this index is " << i << endl;
    }

    cout << "makeSum(4) = " << makeSum({1, 2, 3, 4}) << endl;
    string mystr = "hello,world";
    cout << "mystr is " << mystr << endl;

    return 0;
}

// 初始化列表，参数可变，个数不确定
// initializer_list 定义可变参数
int makeSum(initializer_list<int> lst)
{
    int total = 0;
    for (int val : lst)
    {
        total += val;
    }

    return total;
}
