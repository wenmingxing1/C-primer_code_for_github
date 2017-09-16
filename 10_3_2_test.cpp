#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<list>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

bool issize(const string &s)//, vector<string>::size_type s_size)
{
    return s.size() >= 5;//s_size;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);    //将words按字典序排序，删除重复单词
    //按长度排序，长度相同的单词维持字典序
    stable_sort(words.begin(), words.end(), isShorter);

    //获取一个迭代器，指向第一个满足size()>=sz的元素
    auto First_if = find_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz;});//issize);

    //打印长度大于等于给定值的单词，每个单词后面接一个空格
    for(auto i = First_if; i != words.end(); ++i)
    {
        cout << *i << " ";
    }
}

int main()
{
    vector<string> s{"I", "love", "you", "very", "much", "you", "words", "words","success" };
    biggies(s, 5);

    return 0;
}
