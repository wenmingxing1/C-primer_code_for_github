#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s("Hello World");
    string s2 = s.substr(0,5);      //s2 = Hello
    string s3 = s.substr(6);        //s3 = World
    string s4 = s.substr(6,11);     //s4 = World
    string s5 = s.substr(12);       //抛出一个out_of_range的异常

    cout << s2 << s3 << s4 << endl;
    cout << s5 << endl;
}
