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
    //���õ�д��
    while((i = get_value()) != 42)
    {
        continue;   //��������
    }
}
