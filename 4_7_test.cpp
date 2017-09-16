#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string s = (a > 90) ? "high grade" : (a >= 60) ? "pass" : "fail";
    cout << s << endl;
}
