#include<iostream>

using namespace std;

int main()
{
    auto mid = vi.begin() + vi.size() / 2;

    //text�����������
    //beg��end��ʾ������Χ
    auto beg = text.begin(),end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    //������Ԫ����δ��鲢�����ǻ�û�ҵ�soughtʱִ��ѵ��
    while(mid != end && *mid != sought)
    {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
}
