#include<iostream>
#include<string>

using namespace std;

inline const string &shorterString(const string &s1, const string &s2)
{
    cout << __func__ << endl;
    return s1.size() < s2.size() ? s1 : s2;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    cout << shorterString(s1,s2) << endl;
}
