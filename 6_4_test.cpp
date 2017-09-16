#include<iostream>

using namespace std;

Record lookup(const Account &acct);
Record lookup(const Account&);      //只是省略了形参的名字

Record lookup(phone);
Record lookup(const phone);     //错误，重复声明

Record lookup(phone*);
Record lookup(phone* const)     //错误，重复声明

Record lookup(Account&);
Record lookup(const Account&);      //新函数

Record lookup(Account*);
Record lookup(const Account*);      //新函数

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
