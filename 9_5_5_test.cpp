#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int i = 42;
    string s = to_string(i);        //将整数i转化为字符表示形式

    cout << s << endl;

    double d = stod(s);     //将字符串s转换为浮点数

    cout << d << endl;
}
