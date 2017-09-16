#include<iostream>
using namespace std;

int main()
{
    void *p = &d;       //正确，任何非常量对象的地址都能存入void*

    //正确，将void*转换会初始的指针类型
    double *dp = static_cast<double*>(p);

    const char *pc;
    char *p = const_cast<char*>(pc);

    int *ip;
    char *pc = reinterpret_cast<char*>(ip);
}
