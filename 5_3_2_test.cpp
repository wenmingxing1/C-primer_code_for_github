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
        case 'a':       //case ������һ�����ͳ������ʽ
            ++aCnt;
            break;      //�жϵ�ǰ��������������Ȩת�Ƶ�switch������棨Ҳ����while�����һ����ţ�
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
        ++vowelCnt;     //ͳ������Ԫ�����ִ���
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
