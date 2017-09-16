#include<iostream>

typedef int arrT[10];   //arrT是一个类型别名，它表示的类型是含有10个整数的数组
using arrT = int[10];   //与上面的声明等价
arrT* func(int i);      //func返回一个指向含有10个整数的数组的指针。

int arr[10];
int *p1[10];    //p1是一个含有10个指针的数组
int (*p2)[10] = &arr;   //p2是一个指针，它指向含有10个整数的数组

//func接受一个int类型的实参，返回一个指针，该指针指向含有10个整数的数组
auto func(int i) -> int(*)[10];

using namespace std;

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
//返回一个指针，该指针指向含有5个整数的数组
decltype(odd) *arrPtr(int i)
{
    return (i % 2) ? &odd : &even;      //返回一个指向数组的指针
}

int main()
{

}
