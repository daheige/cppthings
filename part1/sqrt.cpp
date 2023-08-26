#include <iostream>
#include <cmath> // c++风格的math.h在c风格的包名字之前加了一个c，然后去掉了.h后缀
using namespace std;

int main()
{
    double area;
    cout << "enter the floor area,in square feet,of your home: ";
    cin >> area;

    // 求开方
    double side;
    side = sqrt(area);
    cout << "that's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "how facinating!" << endl;

    return 0;
}
/*
./a.out
enter the floor area,in square feet,of your home: 96.01
that's the equivalent of a square 9.79847 feet to the side.
how facinating!
*/
