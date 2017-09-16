#include<iostream>
#include<string>
using namespace std;

int main()
{
//    string s("abc");
//    cout << s << s.empty() << endl;
//
//    string word;
//    while(cin >> word)
//    {
//        cout << word << endl;
//    }
//
//    string line;
//    while(getline(cin,line))
//    {
//        cout << line << endl;
//        cout << line.empty() << endl;
//    }

    string s1 = "Hello";
    string s2("World");

    string s3 = s1 + " " + s2;
    cout << s3 << endl;

    string s4 = "Hello" + " " + s2; //错误
    return 0;


}
