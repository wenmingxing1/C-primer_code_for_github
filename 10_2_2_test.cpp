#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    vector<int> vec;

    auto it = back_inserter(vec);    //ͨ������ֵ�ὫԪ����ӵ�vec��
    *it = 42;   //vec��������һ��Ԫ�أ�ֵΪ42.

    for (auto i : vec)
    {
        cout << i << endl;
    }


}

vector<int> vec;
//back_inserter����һ�����������������������vec���Ԫ��
fill_n(back_inserter(vec), 10, 0);  //���10��Ԫ�ص�vec

