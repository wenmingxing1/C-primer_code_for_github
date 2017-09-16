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
    //按字典序排序words，以便查找重复单词
    sort(words.begin(), words.end(), isShorter);
    //unique重排输入范围，使得每个单词只出现一次
    //排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
    auto end_unique = unique(words.begin(), words.end());
    //使用向量操作erase删除重复单词
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
