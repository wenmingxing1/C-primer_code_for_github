#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<functional>

using namespace std;

bool isShorter(const string &s1, const string &s2)  //sort中的谓词，按照从小到大排序
{
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end(), isShorter);
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

void biggiest(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    auto wc = find_if(words.begin(), words.end(), bind(check_size, placeholders::_1, sz));      //_n在命名空间palceholders中

    for (auto i = wc; i != words.end(); ++i)
        cout << *i << " ";
}



int main()
{
    vector<string> s{"I", "love", "love", "you" };
    biggiest(s, 3);

    return 0;
}
