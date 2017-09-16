#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif // SALES_DATA_H

#include<iostream>
using namespace std;

int main()
{
    const int max_files = 20;   //是常量表达式
    const int limit = max_files + 1;    //是常量表达式
    int staff_size = 27;    //不是常量表达式
    const int sz = get_size();  //不是常量表达式

    const int *p = nullptr;     //p是一个指向整形常量的指针
    constexpr int *q = nullptr;     //q是一个指向整数的常量指针

    typedef double wages;   //wages是double的同义词
    typedef wages base, *p;     //base是double的同义词，p是double* 的同义词

    using SI = Sales_item;  //SI是Sales_item的同义词

    typedef char *pstring;
    const pstring cstr = 0;     //cstr是指向char的常量指针
    const pstring *ps;      //ps是一个指针，他的对象是指向char的常量指针

    auto i = 0, *p = &i;    //正确，i是整型，p是整型指针
    auto sz = 0, pi = 3.14;     //错误，sz和pi的类型不一致

    int i = 0, &r = i;
    auto a = r;     //a是整型
    const int ci = i, &cr = ci;
    auto b = ci;    //b是整型，忽略顶层const
    auto c = cr;    //c是整型
    auto d = &i;    //d是一个整型指针
    auto e = &ci;   //e是一个指向整型常数的指针

    auto &g = ci;   //g是一个整型常量引用
    auto &h = 42;   //错误，不能为非常量引用绑定字面值
    const auto &j = 42;     //正确，可以为常量引用绑定字面值

    auto k = ci, &l = i;    //k是整数，l是整型引用
    auto &m = ci, *p = &ci;     //m是一个对整型常量的引用，p是指向整型常量的指针
    auto &n = i, *p2 = &ci;     //错误，i的类型是int，而ci的类型是const int

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;     //x的类型是const int
    decltype(cj) y = x;     //y的类型是const int&， y绑定到变量x
    decltype(cj) z;     //错误，z是一个引用，必须初始化

    int i = 42, *p = &i, &r = i;
    decltype(r+0) b;    //正确，加法的结果是int，因此b是一个int
    decltype(*p) c;     //错误，c是int&，必须初始化

    decltype((i)) d;    //错误，d是int&，必须初始化
    decltype(i) e;      //正确，e是int




}
