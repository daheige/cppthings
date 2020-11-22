#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a = 12;
	int b = 1;
	int c;
	c = a + 2 * b + 1;

	cout << "a = " << a << "\n";
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "daheige" << endl;

	int x, y, z;
	x = 1;
	y = 12;
	z = 123;
	cout << "x,y,z is " << x
		 << " "
		 << y << " " << z << endl;

	int32_t m = 12;
	cout << "m is " << m << endl;

	uint32_t n = 123;
	cout << "uint32 n is: " << n << endl;

	int64_t expire = 123456;
	cout << "int64 expire is: " << expire << endl;

	uint64_t expire2 = 123;
	cout << "uint64 expire2 is " << expire2 << endl;

	float score = 12.34;
	double floor = 12.3456;
	cout << "score and floor is "
		 << score << " " << floor << endl;

	// auto自动把表达式的结果进行推导，是c++11新特性
	// 编译的时候要加上 -std=c++11
	// g++ -o var.out -std=c++11 var.cpp
	auto x1 = 12.12 * score;
	cout << "x1 = " << x1 << endl;

	char symbol, letter;
	cout << "enter symbol char: ";
	cin >> symbol;
	cout << "enter letter char: ";
	cin >> letter;
	cout << "\n symbol,letter is: " << symbol << ","
		 << letter << endl;

	bool isFoo, isCheck;
	isFoo = true;
	cout << "isFoo,isCheck is " << isFoo
		 << "," << isCheck << endl;

	string str;
	str = "daheige";
	cout << "str is " << str << endl;

	return 0;
}
