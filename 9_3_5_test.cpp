#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vi.begin();     //����begin������cbegin����Ϊ����Ҫ�ı�vi
    while(iter != vi.end())
    {
        if(*iter % 2)
        {
            iter = vi.insert(iter, *iter);      //���Ƶ�ǰԪ��
            iter += 2;  //��ǰ�ƶ���������������ǰԪ���Լ����뵽��֮ǰ��Ԫ��
        }
        else
        {
            iter = vi.erase(iter);      //ɾ��ż��Ԫ��
            //��Ӧ��ǰ�ƶ���������iterָ������ɾ����Ԫ��֮���Ԫ��
        }
    }

    for(auto i : vi)
    {
        cout << i << endl;
    }
}
