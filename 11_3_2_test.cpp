#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    //统计每个单词在输入中出现的次数的一种繁琐方法
    map<string, size_t> word_count; //
    string word;
    while (cin >> word)
    {
        //插入一个元素，关键字等于word，值为1
        //若word已经在word_count中，insert什么也不做
        auto ret = word_count.insert({word, 1});
        if (!ret.second)    //word已在word_count中
            ++ret.first->second;    //递增计数器
    }
}
