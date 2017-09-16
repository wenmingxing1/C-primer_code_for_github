#include<iostream>
#include<string>
#include<vector>

using namespace std;

class B
{
public:
    B();
    B(const B&) = delete;
    //其他成员，不含有移动构造函数
};
class D : public B
{
    //没有生命任何构造函数
};
D d;    //正确，D的合成默认构造函数使用B的默认构造函数
D d2(d);    //错误，D的合成拷贝构造函数是被删除的
D d3(move(d));  //错误，隐式的使用D的被删除的拷贝构造函数
