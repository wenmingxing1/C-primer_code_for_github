#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    while(!ilist.empty())
    {
        process(ilist.front());     //��ilist����Ԫ�ؽ���һЩ����
        ilist.pop_front();      //��ɴ����ɾ����Ԫ��
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

slist.clear();      //ɾ������Ԫ��
slist.erase(slist.begin(), slist.end());
