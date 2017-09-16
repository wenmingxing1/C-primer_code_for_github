#include<iostream>
using namespace std;

int main()
{
    unsigned cnt = 42;  //不是常量表达式
    constexpr unsigned sz = 42;     //是常量表达式
    int arr[10];
    int *parr[sz];      //含有42个整型指针的数组
    string bad[cnt];    //错误，cnt不是常量表达式
    string strs[get_size()];    //当get_size是constexpr时正确；否则错误

    int *ptrs[10];  //ptrs是含有10个整型指针的数组
    int &refs[10] = /* ? */;    //错误，不存在引用的数组
    int (*parray)[10] = &arr;   //parray指向一个含有10个整数的数组
    int (&arrRef)[10] = arr;    //arrRef引用一个含有10个整数的数组
    int *(&arry)[10] = ptrs;    //array是数组的引用，数组含有10个指针
}
