#include<iostream>
using namespace std;

int main()
{
    char currChar,Char;
    if(cin >> currChar)
    {
        int count = 1;
        while(cin >> Char)
        {
            if(Char == currChar)
            {
                count++;
            }
            else
            {
                cout << currChar << " : " << count << endl;
                count = 1;
                currChar = Char;
            }
        }
        cout << currChar << " : " << count << endl;     //�������һ��char�ĸ���
    }
    return 0;
}
