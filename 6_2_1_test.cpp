#include<iostream>
using namespace std;

void reset(int *ip)
{
    *ip = 0;    //�ı���ָ��ip��ָ�����ֵ
    ip = 0; //ֻ�ı���ip�ľֲ�������ʵ��δ���ı�
}

int main()
{
    int i = 42;
    reset(&i);  //�ı�i��ֵ������i�ĵ�ַ
    cout << i << endl;
}
