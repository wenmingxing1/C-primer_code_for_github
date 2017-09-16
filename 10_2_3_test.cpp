#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<numeric>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
    //���ֵ�������words���Ա�����ظ�����
    sort(words.begin(), words.end(), isShorter);
    //unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
    //�����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
    auto end_unique = unique(words.begin(), words.end());
    //ʹ����������eraseɾ���ظ�����
    words.erase(end_unique, words.end());
}

int main()
{
    vector<string> vec{"fox", "jumps", "over", "quick", "red", "slow", "the", "turtle", "the"};
    for(auto i : vec)
        cout << i << " ";
    cout << endl;
    elimDups(vec);
    for(auto i : vec)
        cout << i << " ";
    cout << endl;

}
