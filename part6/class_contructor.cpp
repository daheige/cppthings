#include <iostream>

using namespace std;

class BankAccout
{
public:
    BankAccout(int d, int c, double rate);
    BankAccout();
    void set(int d, int c, double rate);
    void set(int d, double rate); // 类中的方法重载
    void update();
    double get_balance() const;
    double get_rate();
    void output();

private:
    double balance;
    double interest_rate;
    double fraction(double percent);
};

// 定义构造函数，::表示作用域符号
BankAccout::BankAccout(int d, int c, double rate)
{
    if (d < 0 || c < 0)
    {
        cout << "param error" << endl;
        exit(1);
    }

    balance = d + 0.01 * c;
    interest_rate = rate;
}

// 构造函数支持函数重载操作
BankAccout::BankAccout()
{
    balance = 10;
    interest_rate = 0.3;
};

void BankAccout::set(int d, int c, double rate)
{
    balance = d + 0.02 * c;
    interest_rate = rate;
}

void BankAccout::set(int d, double rate)
{
    balance = d * rate + 0.5;
    interest_rate = 0.2 * rate;
}

void BankAccout::update()
{
    balance = 123;
}

// const 修饰balance不能改变值
double BankAccout::get_balance() const
{
    return balance;
}

double BankAccout::get_rate()
{
    return interest_rate;
}

void BankAccout::output()
{
    cout << "current balance: " << balance
         << "current rate: " << interest_rate
         << endl;
}

double BankAccout::fraction(double a)
{
    return balance * a;
}

int main()
{
    BankAccout b(1, 2, 0.2);
    b.set(1, 3, 0.1);
    b.output();

    BankAccout c; // 调用无参数的构造函数这里不需要（）
    cout << "balance: " << c.get_balance() << endl;
    c.output();

    // 动态变量
    BankAccout *a;
    a = new BankAccout(2, 3, 0.2); // 这里采用new初始化类的对象
    // 调用指针对象上的方法
    a->output();

    return 0;
}
