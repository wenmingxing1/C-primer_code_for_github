#include<iostream>
#include<string>
#include<vector>

using namespace std;

namespace cplusplus_primer
{
    class Sales_data {/* */ };
    Sale_data operator+(const Sales_data&, const Sales_data&);
    class Query {/* */};
    class Query base {/* */};
}   // 命名空间结束后无须分号

// --Sales_data.h--
// #include应该出现在打开命名空间的操作之前
#include<string>
namespace cplusplus_primer
{
    class Sales_data {/**/};
    Sales_data operator+(const Sales_data&, const Sales_data&);
    //Sales_data的其他接口函数的声明
}

//--Sales_data.cc--
//确保#include出现在打开命名空间的操作之前
#include "Sales_data.h"
namespace cplusplus_primer
{
    //Sales_data成员及重载运算符的定义
}

// --user.cc--
//Sales_data.h头文件的名字位于命名空间cplusplus_primer中
int main()
{
    using cplusplus_primer::Sales_data;
    Sales_data trans1, trans2;
    //...
    return 0;
}

#include "Sales_data.h"

namespace cplusplus_primer
{
    //重新打开命名空间cplusplus_primer
    //命名空间中定义的成员可以直接使用名字，此时无须前缀
    std::istream& operator>>(std::istream& in, Sales_data& s) {/* */}
}

//命名空间之外定义的成员必须使用含有前缀的名字
cplusplus_primer::Sales_data cplusplus_primer::operator+(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data ret(lhs);
    //...
}


namespace blip
{
    int i = 16, j = 15, k = 23;
    //其他声明
}
int j = 0;  //正确，blip的j隐藏在命名空间中
void mainp()
{
    //using指示，blip中的名字呗“添加”到全局作用域中
    using namespace blip;   //如果使用了j，则将在::j和blip::j之间产生冲突
    ++i;    //正确，将blip的i设定为17
    ++j;    //二义性错误，是全局的j还是blip的j
    ++::j;  //正确，将全部的j设定为1
    ++blip::j;  //正确，将blip::j设定为16
    int k = 97; //当前局部的k隐藏了blip::k
    ++k;    //将当前局部的k设定为98
}

namespace A
{
    class C
    {
        //两个友元，在友元声明之外没有其他声明
        //这些函数隐式的成为命名空间A的成员
        friend void f2();   //除非另有声明，否则不会被找到
        friend void f(const C&);    //根据实参相关的查找规则可以被找到
    };
}

int main()
{
    A::C cobj;
    f(cobj);    //正确，通过A::C中的友元声明找到A::f
    f2();   //错误，A::f2没有被声明
}












