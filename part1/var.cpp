/*
* Author: heige
* Date: 210219
* Feature: PRD version 1,Feature 1.0
* Change log:
* Date		| Change
* ----------------------------------
* 210219	| add string and arrary,vector demo
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;
void addOne(int &i);

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

	// 定义数组格式array<type,n> arr={xxx}
	array<int, 3> arr = {1, 2, 3};
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "current item is " << arr[i] << endl;
	}

	vector<int> myvec = {1, 2, 3, 4};
	myvec.push_back(5);
	for (int i = 0; i < myvec.size(); i++)
	{
		cout << "current item is " << myvec[i] << endl;
	}

	int i = 1;
	addOne(i);
	cout << "i = " << i << endl;

	auto m1{1}; // 统一初始化变量
	cout << "m1 = " << m1 << endl;

	return 0;
}

void addOne(int &i)
{
	i++;
}
