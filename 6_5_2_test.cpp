#include<iostream>
#include<string>

using namespace std;

cout << shorterString(s1,s2) << endl;
cout << (s1.size() < s2.size() ? s1 : s2) << endl;

inliine const string &
shorterString(const string &s1,const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}
