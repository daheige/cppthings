#include <iostream>
using namespace std;

// 没有返回值的函数
void show_results(double f_degrees, double c_degrees);

int main()
{
    show_results(1.2, 1.3);
    return 0;
}

void show_results(double f_degrees, double c_degrees)
{
    cout << "f_degress,c_degress = " << f_degrees << " "
         << c_degrees << endl;
    //  return; // 这里可以省略return
}