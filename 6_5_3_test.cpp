#include<iostream>

using namespace std;

//$ CC -D NDEBUG main.C # use /D with the Microsoft compiler

void print(const int ia[], size_t size)
{
    #ifndef NDEBUG
        // __func__是编译器定义的一个局部静态变量，用于存放函数的名字
        ceer << __func__ << ":array size is" << size << endl;
    #endif // NDEBUG
}

int main()
{

}
