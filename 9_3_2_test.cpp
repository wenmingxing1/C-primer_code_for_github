#include<iostream>
#include<string>
#include<deque>
#include<list>
#include<forward_list>
#include<vector>

using namespace std;

int main()
{
    vector<string> svec;    //��vector
    cout << svec[0];    //����ʱ����svec��û��Ԫ��
    cout << svec.at(0);     //�׳�һ��out_of_range�쳣
}

