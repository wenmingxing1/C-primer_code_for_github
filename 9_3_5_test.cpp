#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vi.begin();     //调用begin而不是cbegin，因为我们要改变vi
    while(iter != vi.end())
    {
        if(*iter % 2)
        {
            iter = vi.insert(iter, *iter);      //复制当前元素
            iter += 2;  //向前移动迭代器，跳过当前元素以及插入到它之前的元素
        }
        else
        {
            iter = vi.erase(iter);      //删除偶数元素
            //不应向前移动迭代器，iter指向我们删除的元素之后的元素
        }
    }

    for(auto i : vi)
    {
        cout << i << endl;
    }
}
