#include<iostream>
using namespace std;

int main()
{
    const int ci = 1024;
    const int &r1 = ci;    //正确，引用及其对应的对象都是常量
    r1 = 42;    //错误，r1是对常量的引用
    int &r2 = ci;   //错误，试图让一个非常量引用指向一个常量对象

    int i = 42;
    const int &r1 = i;      //允许将const int&绑定到一个普通int对象上
    const int &r2 = 42;
    const int &r3 = r1*2;   //正确，r3是一个常量引用
    int &r4 = r1*2;     //错误，r4是一个普通的非常量引用，而r1是一个常量引用

    const double pi = 3.14;      //pi是个常量，他的值不能改变
    double *ptr = &pi;      //错误，ptr是个普通指针，不能指向常量
    const double *cptr = &pi;   //正确
    *cptr = 42;     //错误，不能通过指向常量的指针给常量赋值

    int i = 0;
    int *const p1 = &i;     //这是一个顶层const
    const int ci = 42;      //这是一个底层const
    const int *const p3 = p2;      //第一个是底层指针，第二个是顶层指针
}
