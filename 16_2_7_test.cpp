#include<iostream>
#include<string>
#include<vector>

using namespace std;

//接受一个可调用对象和另外两个参数的模板
//对“翻转”的参数调用给定的可调用对象
//flip1是一个不完整的实现，顶层const和引用丢失了
template <typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2)
{
    f(t2, t1);
}

void f(int v1, int &v2) //v2是一个引用
{
    cout << v1 << " " << ++v2 << endl;
}



int main()
{
    int i = 1, j = 2;
    //f(42, j);   //f改变了实参i
    flip1(f, j, 42);    //通过flip1调用f不会改变j

    cout << j << endl;

    return 0;
}
