#include<iostream>

using namespace std;

int main()
{
    auto mid = vi.begin() + vi.size() / 2;

    //text必须是有序的
    //beg和end表示搜索范围
    auto beg = text.begin(),end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    //当还有元素尚未检查并且我们还没找到sought时执行训话
    while(mid != end && *mid != sought)
    {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
}
