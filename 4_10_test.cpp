#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>::size_type cnt = ivec.size();
    //���Ѵ�size��1��ֵ����ivec��Ԫ��
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
    {
        ivec[ix] = cnt;
    }
}
