#include<iostream>

typedef double A;
template <typename A, typename B> void f(A a, B b)
{
    A tmp = a;  //tmp的类型为模板参数A的类型，而非double
    double B;   //错误，不能重新声明模板参数B
}

//compare有一个默认模板实参less<T>和一个默认函数实参F()
template <typename T, typename F = less<T>>
int compare(const T &v1, const T &v2, F f = F())
{
    if (f(v1, v2)) return -1;
    if (f(v1, v2)) return 1;
    return 0;
}

bool i = compare(0, 42);    //使用默认实参less
bool j = compare(item1, item2, compareIsbn);    //不使用默认实参

template <class T = int> class Numbers
{
public:
    Numbers(T v = 0): val(v) {}
    private T val;
}

Numbers<long double> lots_of_precision;
Numbers<> average_precision;    //空<>表示我们希望使用默认实参

//函数对象类，对给定指针执行delete
class DebugDelete
{
public:
    DebugDelete(ostream &s = cerr): os(s) {}
    //与任何函数模板相同，T的类型由编译器推断
    template <typename T> void operator()(T *p) const
    {os << "deleting unique_ptr" << endl; delete p;}
private:
    ostream &os;
};

double *p = new double;
DebugDelete d;  //可像delete表达式一样使用的对象
d(p);   //调用DebugDelete::operator()(double*),释放p
int *ip = new int;
//在一个临时的DebugDelete对象上调用operator()(int*)
DebugDelete()(ip);


//Application.cc
//这些模板类型必须在程序其他位置进行实例化
extern template class Blob<string>;
extern template int compare(const int&, const int&);
Blob<string> sa1, sa2;  //实例化会出现在其他位置
int i = compare(a1[0], a2[0]);  //实例化出现在其他位置

//templateBuild.cc
//实例化文件必须为每个在其他文件中声明为extern的类型和函数提供一个（非extern）的定义
template int compare(const int&, const int&);
template class Blob<string>;    //实例化类模板的所有成员

//编译器无法推断T1，它未出现在函数参数列表中
template <typename T1, typename T2, typename T3>
T1 sum(T2, T3)

//T1是显式指定的，T2和T3是从函数实参类型推断而来的
auto val3 = sum<long>(i,lng);   //long sum(int,long)



















