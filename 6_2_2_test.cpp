#include<iostream>
#include<string>
using namespace std;

//int reset(int i)
//{
//    return i = 0;
//}
//
//int main()
//{
//    int j = 1;
//    cout << reset(j) << endl;
//}

//bool isShorter(const string &s1, const string &s2)
//{
//    return s1.size() < s2.size();
//}
//int main()
//{
//    string s1 = "abc";
//    string s2 = "abcd";
//
//    if(isShorter(s1,s2))
//        cout << "yes" << endl;
//    else
//        cout << "No" << endl;
//}

int find_char(const string &s, char c, int &occurs)
{
    auto ret = s.size();    //��һ�γ��ֵ�λ��
    occurs = 0;         //���ñ�ʾ���ִ������βε�ֵ
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;        //��¼c��һ�γ��ֵ�λ��
            ++occurs;        //���ִ�����1
        }
    }
    return ret;         //���ִ���ͨ��occurs��ʽ�ķ���
}

int main()
{
    string s= "abaacdaca";
    int ctr;
    auto index = find_char(s,'a',ctr);  //��Ϊoccurs��������ʽ�������ܸı�ctr��ֵ
    cout << index << " " << ctr << endl;
}
