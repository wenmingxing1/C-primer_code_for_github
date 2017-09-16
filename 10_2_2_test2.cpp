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
    //ret指向拷贝到a2的尾元素之后的位置
    auto ret = copy(begin(a1), end(a1), a2);    //把a1的内容拷贝给a2

    for (auto i : a2)
    {
        cout << i << endl;
    }
}
