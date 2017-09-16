#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    while(!ilist.empty())
    {
        process(ilist.front());     //对ilist的首元素进行一些处理
        ilist.pop_front();      //完成处理后删除首元素
    }
}

list<int> lst = {0,1,2,3,4,5,6,7,8,9};
auto it = lst.begin();
while(it != lst.end())
{
    if(*it % 2)
        it = lst.erase(it);
    else
        ++it;
}

elem1 = slist.erase(elem1, elem2);

slist.clear();      //删除所有元素
slist.erase(slist.begin(), slist.end());
