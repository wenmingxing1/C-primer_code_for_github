#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    for (auto i : v)
    {
        i *= 2;
        cout << i << endl;
    }
    for (auto r : v)
        cout << r << endl;

    for (auto beg = v.begin(), end = v.end(); beg != end; ++beg)
    {
        auto &r = *beg; //r����Ϊ�������ͣ��������ܶ�Ԫ��ִ��д����
        r *= 2;
    }
}
