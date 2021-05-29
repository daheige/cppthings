#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 动态数组，可以给数组加元素和删除元素
    // 需要导入vector头文件，并使用命名空间std
    vector<int> arr = {1, 2, 4};
    arr.push_back(1); // 添加元素
    arr.push_back(21);

    cout << "arr size: " << arr.size() << endl;
    cout << arr[0] << endl;

    // 迭代数组，遍历数组
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "current value: " << arr[i] << endl;
    }

    cout << "cap of arr: " << arr.capacity() << endl;

    return 0;
}