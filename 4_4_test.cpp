#include<iostream>
using namespace std;

int main()
{
    int i = get_value();
    while(i != 42)
    {
        i = get_value();
    }

    int i;
    //更好的写法
    while((i = get_value()) != 42)
    {
        continue;   //其他处理
    }
}
