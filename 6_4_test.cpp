#include<iostream>

using namespace std;

Record lookup(const Account &acct);
Record lookup(const Account&);      //ֻ��ʡ�����βε�����

Record lookup(phone);
Record lookup(const phone);     //�����ظ�����

Record lookup(phone*);
Record lookup(phone* const)     //�����ظ�����

Record lookup(Account&);
Record lookup(const Account&);      //�º���

Record lookup(Account*);
Record lookup(const Account*);      //�º���

const string &shorterShring(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2)
{
    auto &r = shorterString(cons_cast<const string&>(s1), const_cast<const string&>(s2));
    return const_cast<string&>(r);
}

int main()
{

}
