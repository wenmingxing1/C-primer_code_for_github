#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = "a string", *p = &s1;
    auto n = s1.size();
    n = (*p).size();    //��������������ȼ����ڵ�����������Ա��������
    n = p->size();      //�ȼ��ڣ�*p��.size

    cout << n << endl;
}
