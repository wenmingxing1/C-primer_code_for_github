#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<numeric>
#include<iterator>

using namespace std;

int main()
{
    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1) / sizeof(*a1)];
    //retָ�򿽱���a2��βԪ��֮���λ��
    auto ret = copy(begin(a1), end(a1), a2);    //��a1�����ݿ�����a2

    for (auto i : a2)
    {
        cout << i << endl;
    }
}
