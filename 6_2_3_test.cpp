#include<iostream>

using namespace std;

int main()
{
    void fcn(const int i)   //fcn �ܶ�ȡi�����ǲ�����iдֵ
    void fcn(int i)     //�����ظ�������fcn(int)

    int i = 0;
    const int ci = i;   //�ǳ�����ʼ���ײ�const
    string::size_type ctr = 0;
    reset(&i);  //�����β�����Ϊint* ��reset����
    reset(&ci);     //���󣬲����ó��������ʼ���ǳ����β�
    reset(i);   //�����β�����Ϊint& ��reset����
    reset(ci);      //���󣬲��ܰ���ͨ���ð󶨵�const����ci��
    reset(42);      //���󣬲��ܰ���ͨ���ð󶨵�����ֵ��
    reset(ctr);     //�������Ͳ�ƥ�䣬ctrΪ�޷�������

    //������ƣ���һ���βε�����Ӧ��Ϊconst string&
    string::size_type find_char(string &s,char c,string::size_type &occurs)

    find_char("Hello World",'o',ctr);

    bool is_sentence(const string &s)
    {
        //�����s��ĩβ����ֻ��һ����ţ���s��һ������
        string::size_type ctr = 0;
        return find_char(s,'.',ctr) == s.size()-1 && ctr == 1;
    }
}
