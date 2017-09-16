#include<iostream>
using namespace std;

void reset(int *ip)
{
    *ip = 0;    //改变了指针ip所指对象的值
    ip = 0; //只改变了ip的局部拷贝，实参未被改变
}

int main()
{
    int i = 42;
    reset(&i);  //改变i的值，而非i的地址
    cout << i << endl;
}
