#include<iostream>
using namespace std;

int main()
{
    unsigned cnt = 42;  //���ǳ������ʽ
    constexpr unsigned sz = 42;     //�ǳ������ʽ
    int arr[10];
    int *parr[sz];      //����42������ָ�������
    string bad[cnt];    //����cnt���ǳ������ʽ
    string strs[get_size()];    //��get_size��constexprʱ��ȷ���������

    int *ptrs[10];  //ptrs�Ǻ���10������ָ�������
    int &refs[10] = /* ? */;    //���󣬲��������õ�����
    int (*parray)[10] = &arr;   //parrayָ��һ������10������������
    int (&arrRef)[10] = arr;    //arrRef����һ������10������������
    int *(&arry)[10] = ptrs;    //array����������ã����麬��10��ָ��
}
