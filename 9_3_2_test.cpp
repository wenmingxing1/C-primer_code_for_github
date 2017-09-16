#include<iostream>
#include<string>
#include<deque>
#include<list>
#include<forward_list>
#include<vector>

using namespace std;

int main()
{
    vector<string> svec;    //空vector
    cout << svec[0];    //运行时错误，svec中没有元素
    cout << svec.at(0);     //抛出一个out_of_range异常
}

