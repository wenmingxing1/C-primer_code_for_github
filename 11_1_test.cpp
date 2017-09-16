#include<iostream>
#include<string>
#include<map>
#include<set>

using namespace std;

int main()
{
    set<string> exclude{ "the", "a", "an", "and", "or" };
    //统计每个单词在输入中出现次数
    map<string, size_t> word_count; //string到size_t的空map
    string word;
    while (cin >> word)
        //只统计不在set中的单词
        if (exclude.find(word) == exclude.end())
            ++word_count[word]; //提取word的计数器并加1

    for(const auto &w : word_count) //对map中的每个元素
        //打印结果
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << endl;
}
