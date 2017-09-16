#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = "a string", *p = &s1;
    auto n = s1.size();
    n = (*p).size();    //解引用运算符优先级低于点运算符，所以必须加括号
    n = p->size();      //等价于（*p）.size

    cout << n << endl;
}
