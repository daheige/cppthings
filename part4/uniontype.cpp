#include <iostream>
#include <string>
using namespace std;

// 共用体union定义
// 只能存储其中的一种，存放不同的数据类型
// 由于共用体每次只能存储一个值，因此它必须有足够的空间来存储最大的成员
// 所以，共用体的长度为其最大成员的长度
union oneOfAll {
    int int_val;
    long long_val;
    double d_val;
};

union idVal {
    long id_num;
    char id_char[20];
};

struct widget {
    string brand;
    int type;
    idVal id_val;
};

int main() {
    oneOfAll pail;
    pail.int_val = 15;
    cout << "int_val is: " << pail.int_val << endl;

    oneOfAll p;
    p.d_val = 1.23;
    cout << "double_val is: " << p.d_val << endl;

    p.int_val = 1;
    cout << "int_val is: " << p.int_val << endl;

    // 联合使用场景
    widget w;
    w.brand = "tutu";
    w.type = 2;
    idVal id;
    id.id_char[0] = 'a';
    id.id_char[1] = 'b';
    id.id_char[2] = 'c';
    w.id_val = id;
    if (w.type == 1) {
        cout << "id: " << w.id_val.id_num;
    } else {
        cout << "id: " << w.id_val.id_char;
    }

    return 0;
}

/*
% g11 uniontype.cpp
% ./a.out
int_val is: 15
double_val is: 1.23
int_val is: 1
*/