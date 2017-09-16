#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end())
    {
        if(*curr % 2)
            curr = flst.erase_after(prev);      //删除并移动curr
        else
        {
            prev = curr;    //移动迭代器curr，指向下一个元素，prev指向curr之前的元素
            ++curr;
        }
    }

    for (auto i : flst)
        cout << i << endl;
}
