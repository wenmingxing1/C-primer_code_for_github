#include<iostream>
using namespace std;

int main()
{
    const int ci = 1024;
    const int &r1 = ci;    //��ȷ�����ü����Ӧ�Ķ����ǳ���
    r1 = 42;    //����r1�ǶԳ���������
    int &r2 = ci;   //������ͼ��һ���ǳ�������ָ��һ����������

    int i = 42;
    const int &r1 = i;      //����const int&�󶨵�һ����ͨint������
    const int &r2 = 42;
    const int &r3 = r1*2;   //��ȷ��r3��һ����������
    int &r4 = r1*2;     //����r4��һ����ͨ�ķǳ������ã���r1��һ����������

    const double pi = 3.14;      //pi�Ǹ�����������ֵ���ܸı�
    double *ptr = &pi;      //����ptr�Ǹ���ָͨ�룬����ָ����
    const double *cptr = &pi;   //��ȷ
    *cptr = 42;     //���󣬲���ͨ��ָ������ָ���������ֵ

    int i = 0;
    int *const p1 = &i;     //����һ������const
    const int ci = 42;      //����һ���ײ�const
    const int *const p3 = p2;      //��һ���ǵײ�ָ�룬�ڶ����Ƕ���ָ��
}
