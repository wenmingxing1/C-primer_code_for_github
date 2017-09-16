#include<iostream>
using namespace std;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char str;
    while(cin >> str)
    {
        switch(str)
        {
        case 'a':       //case 必须是一个整型常量表达式
            ++aCnt;
            break;      //中断当前控制流，将控制权转移到switch语句外面（也就是while语句的右花括号）
        case 'e':
            ++eCnt;
            break;
        case 'i':
            ++iCnt;
            break;
        case 'o':
            ++oCnt;
            break;
        case 'u':
            ++uCnt;
            break;
        }
    }
    cout << aCnt << eCnt << iCnt << oCnt << uCnt << endl;

    switch(str)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        ++vowelCnt;     //统计所有元音出现次数
        break;
    }

    switch(str)
    {
    case 'a': case 'e' case 'i': case 'o': case 'u':
        ++vowelCnt;
        break;
    default:
        ++otherCnt;
        break;
    }
}
