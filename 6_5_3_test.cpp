#include<iostream>

using namespace std;

//$ CC -D NDEBUG main.C # use /D with the Microsoft compiler

void print(const int ia[], size_t size)
{
    #ifndef NDEBUG
        // __func__�Ǳ����������һ���ֲ���̬���������ڴ�ź���������
        ceer << __func__ << ":array size is" << size << endl;
    #endif // NDEBUG
}

int main()
{

}
