#include<iostream>
#include<string>
#include<vector>

using namespace std;

//����һ���ɵ��ö������������������ģ��
//�ԡ���ת���Ĳ������ø����Ŀɵ��ö���
//flip1��һ����������ʵ�֣�����const�����ö�ʧ��
template <typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2)
{
    f(t2, t1);
}

void f(int v1, int &v2) //v2��һ������
{
    cout << v1 << " " << ++v2 << endl;
}



int main()
{
    int i = 1, j = 2;
    //f(42, j);   //f�ı���ʵ��i
    flip1(f, j, 42);    //ͨ��flip1����f����ı�j

    cout << j << endl;

    return 0;
}
