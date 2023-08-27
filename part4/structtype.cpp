#include <iostream>
#include <string>
using namespace std;

// 结构体定义
struct inflatable {
    string name;
    float volume;
    double price;
};

int main() {
    // 创建一个结构体对象
    inflatable guest;
    guest.name = "daheige";  // 赋值操作
    guest.volume = 120.01;
    guest.price = 122;

    cout << "name: " << guest.name << " volume: " << guest.volume
         << " price: " << guest.price << endl;

    // 省略字段的写法
    inflatable g = {
        "daheige",
        120,
        122.1,
    };

    cout << "other guest name: " << guest.name << " volume: " << guest.volume
         << " price: " << guest.price << endl;

    // 声明结构体，并声明一个变量的方式初始化
    struct perks {
        int num;
        string car;
    } mr_smith;

    mr_smith.num = 1;
    mr_smith.car = "h5";
    cout << "car: " << mr_smith.car << " num: " << mr_smith.num << endl;

    // 结构体数组
    inflatable gifts[2];
    gifts[0] = guest;
    gifts[1] = g;
    cout << "gifts[0] guest name: " << gifts[0].name
         << " volume: " << gifts[0].volume << " price: " << gifts[0].price
         << endl;

    inflatable guests[2] = {{
                                "daheige",
                                120,
                                122.1,
                            },
                            {
                                "xiaoming",
                                11,
                                11.1,
                            }};
    cout << "guests[0] guest name: " << guests[0].name
         << " volume: " << guests[0].volume << " price: " << guests[0].price
         << endl;

    return 0;
}