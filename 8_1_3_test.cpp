#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "abcd";
    cout << s << endl;      //输出s和一个换行，然后刷新缓冲区
    cout << s << ends;      //输出s，然后刷新缓冲区，不附加任何额外字符
    cout << s << flush;     //输出s和一个空字符，然后刷新缓冲区
    cout << 'a' << endl;

    cout << ends;

    cout << unitbuf;    //所有输出操作后都会立即刷新缓冲区，任何输出都立即刷新，无缓冲
    cout << nounitbuf;      //回到正常的缓冲方式
}
