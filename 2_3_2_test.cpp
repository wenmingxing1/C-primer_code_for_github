#include<iostream>
#include<cstdlib>
using namespace std;

//double  dval;
//double *pd = &dval;     //正确
//double *pd2 = pd;       //正确
//int *pi = pd;       //错误，指针pi的类型和pd的类型不匹配
//pi = &dval;     //错误，试图把double型对象的地址付给int型指针
int main()
{
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;     //需要首先#include<cstdlib>

    if (p1)
        cout << "chengong" << endl;
}

int* p1,p2;     //p1指向int指针，p2是int型

int i =42;
int *p;
int *&r = p;    //r是一个对指针p的引用
r = &i;     //r引用了一个指针，因此给r赋值&i就是令p指向i
*r = 0;     //解引用r得到i，也就是p指向的对象，将i的值改为0
