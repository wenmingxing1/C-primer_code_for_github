#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string str = "23,5,6";
    stringstream ss(str);
    char ch;
    int a,b,c;
    ss >> a >> ch >> b >> ch >> c;

    cout << a << b << c << endl;
}
