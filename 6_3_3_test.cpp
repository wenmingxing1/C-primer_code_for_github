#include<iostream>

typedef int arrT[10];   //arrT��һ�����ͱ���������ʾ�������Ǻ���10������������
using arrT = int[10];   //������������ȼ�
arrT* func(int i);      //func����һ��ָ����10�������������ָ�롣

int arr[10];
int *p1[10];    //p1��һ������10��ָ�������
int (*p2)[10] = &arr;   //p2��һ��ָ�룬��ָ����10������������

//func����һ��int���͵�ʵ�Σ�����һ��ָ�룬��ָ��ָ����10������������
auto func(int i) -> int(*)[10];

using namespace std;

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
//����һ��ָ�룬��ָ��ָ����5������������
decltype(odd) *arrPtr(int i)
{
    return (i % 2) ? &odd : &even;      //����һ��ָ�������ָ��
}

int main()
{

}
