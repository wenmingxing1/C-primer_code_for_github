#include<iostream>
#include<cstdlib>
using namespace std;

//double  dval;
//double *pd = &dval;     //��ȷ
//double *pd2 = pd;       //��ȷ
//int *pi = pd;       //����ָ��pi�����ͺ�pd�����Ͳ�ƥ��
//pi = &dval;     //������ͼ��double�Ͷ���ĵ�ַ����int��ָ��
int main()
{
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;     //��Ҫ����#include<cstdlib>

    if (p1)
        cout << "chengong" << endl;
}

int* p1,p2;     //p1ָ��intָ�룬p2��int��

int i =42;
int *p;
int *&r = p;    //r��һ����ָ��p������
r = &i;     //r������һ��ָ�룬��˸�r��ֵ&i������pָ��i
*r = 0;     //������r�õ�i��Ҳ����pָ��Ķ��󣬽�i��ֵ��Ϊ0
