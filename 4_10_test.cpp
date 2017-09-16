#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>::size_type cnt = ivec.size();
    //将把从size到1的值赋给ivec的元素
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
    {
        ivec[ix] = cnt;
    }
}
