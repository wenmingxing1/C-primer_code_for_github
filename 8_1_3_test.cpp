#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "abcd";
    cout << s << endl;      //���s��һ�����У�Ȼ��ˢ�»�����
    cout << s << ends;      //���s��Ȼ��ˢ�»��������������κζ����ַ�
    cout << s << flush;     //���s��һ�����ַ���Ȼ��ˢ�»�����
    cout << 'a' << endl;

    cout << ends;

    cout << unitbuf;    //������������󶼻�����ˢ�»��������κ����������ˢ�£��޻���
    cout << nounitbuf;      //�ص������Ļ��巽ʽ
}
