#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int i = 42;
    string s = to_string(i);        //������iת��Ϊ�ַ���ʾ��ʽ

    cout << s << endl;

    double d = stod(s);     //���ַ���sת��Ϊ������

    cout << d << endl;
}
