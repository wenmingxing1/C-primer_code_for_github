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
    elimDups(words);    //��words���ֵ�������ɾ���ظ�����
    //���������򣬳�����ͬ�ĵ���ά���ֵ���
    stable_sort(words.begin(), words.end(), isShorter);

    //��ȡһ����������ָ���һ������size()>=sz��Ԫ��
    auto First_if = find_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz;});//issize);

    //��ӡ���ȴ��ڵ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
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
