#include <string>
#include <iostream>
using namespace std;

class Point{
// 公共方法
public:
    Point(int x,int y):mX(x),mY(y){};
    double area() const;

// 一般定义类的变量为私有变量
private:
    int mX,mY;
};

// 定义类的方法
double Point::area () const {
    return mX * mY;
}


// 一般建议每个成员元素之前加上小字母m
// 类的定义，class里面定义方法和成员元素
class AirlineTicket
{
public: // 公共方法
    // 定义构造函数
    AirlineTicket();

    // 定义析构函数，在对象被销毁时候调用
    ~AirlineTicket();

    double calculatePriceInDollars() const;
    const std::string &getPassengerName() const;
    void setPassengerName(const std::string &name);
    int getNumberOfMiles() const;
    void setNumberOfMiles(int miles);
    bool hasEliteSuperRewardsStatus() const;
    void setHasEliteSuperRewardsStatus(bool status);

private: // 类的成员，建议一般情况下定义为私有变量
    std::string mPassengerName;
    int mNumberOfMiles;
    bool mHasEliteSuperRewardsStatus;
};

//================类的定义------------
//  构造函数
AirlineTicket::AirlineTicket()
{
    mPassengerName = "Unknown passenger";
    mNumberOfMiles = 0;
    mHasEliteSuperRewardsStatus = false;
}

double AirlineTicket::calculatePriceInDollars() const
{
    if (hasEliteSuperRewardsStatus())
    {
        return 0;
    }

    return getNumberOfMiles() * 0.1;
}

const std::string &AirlineTicket::getPassengerName() const
{
    return mPassengerName;
}

void AirlineTicket::setPassengerName(const std::string &name)
{
    mPassengerName = name;
}

int AirlineTicket::getNumberOfMiles() const
{
    return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int n)
{
    mNumberOfMiles = n;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const
{
    return mHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool b)
{
    mHasEliteSuperRewardsStatus = b;
}

AirlineTicket::~AirlineTicket()
{
    cout << "destory func..." << endl;
};

int main()
{
    // 实例化一个对象
    AirlineTicket myTicket;
    myTicket.setPassengerName("heige");
    myTicket.setNumberOfMiles(100);
    double cost = myTicket.calculatePriceInDollars();

    cout << "this ticket will const $" << cost << endl;

    // 通过智能指针的方式声明,不需要调用delete操作，清除内存
    // auto类型推导
    auto myTicket2 = make_unique<AirlineTicket>();
    myTicket2->setPassengerName("mick");
    myTicket2->setNumberOfMiles(2000);
    myTicket2->setHasEliteSuperRewardsStatus(true);
    double cost2 = myTicket2->calculatePriceInDollars();
    cout << "this other ticket will cost $" << cost2 << endl;

    // 不使用智能指针，用new方式分配内存
    AirlineTicket *myticket3 = new AirlineTicket;
    myticket3->setPassengerName("maomao");
    myticket3->setNumberOfMiles(1000);
    cout << "this other ticket will cost $" << myticket3->calculatePriceInDollars() << endl;
    delete myticket3; // 手动分配的指针，需要调用delete方法，然后将值赋值为nullptr空指针
    myticket3 = nullptr;

    Point p = {1,2}; // 初始化{...}模式
    double radius = p.area();
    cout << "radius = "<< radius << endl;

    Point p2{1,3};// 直接赋值，省略了=
    cout << "area = "<< p2.area() << endl;

    return 0;
}