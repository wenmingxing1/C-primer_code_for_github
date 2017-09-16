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

    auto it = back_inserter(vec);    //通过它赋值会将元素添加到vec中
    *it = 42;   //vec中现在有一个元素，值为42.

    for (auto i : vec)
    {
        cout << i << endl;
    }


}

vector<int> vec;
//back_inserter常见一个插入迭代器，可以用来向vec添加元素
fill_n(back_inserter(vec), 10, 0);  //添加10个元素到vec

