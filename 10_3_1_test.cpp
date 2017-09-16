#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<list>

using namespace std;

//比较函数，用来按长度排序单词
bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

//按长度由短至长排序words
sort(words.begin(), words.end(), isShorter);
