#include<iostream>
#include<string>
#include<vector>
//#include<>

using namespace std;

//用来种植递归并打印最后一个元素的函数
//此函数必须在可变参数版本的print定义之前声明
template <typename T> ostream &print(ostream &os, const T &t)
{
    return os << t; //包中最后一个元素之后不打印分隔符
}
//包中除了最后一个元素之外的其他元素都会调用这个版本的print函数
template <typename T, typename... Args> ostream &print(ostream &os, const T &t, const Args&... rest)
{
    os << t << " , " ;  //打印第一个实参
    return print(os, rest...);  //递归调用，打印其他实参
}

int main()
{
    string s = "This is a string!";
    double i = 234.234523;
    print(cout, i, s, 42);

    return 0;
}
