#include<iostream>
using namespace std;

int main()
{
    void *p = &d;       //��ȷ���κηǳ�������ĵ�ַ���ܴ���void*

    //��ȷ����void*ת�����ʼ��ָ������
    double *dp = static_cast<double*>(p);

    const char *pc;
    char *p = const_cast<char*>(pc);

    int *ip;
    char *pc = reinterpret_cast<char*>(ip);
}
