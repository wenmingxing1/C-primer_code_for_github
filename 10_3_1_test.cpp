#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<list>

using namespace std;

//�ȽϺ������������������򵥴�
bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

//�������ɶ���������words
sort(words.begin(), words.end(), isShorter);
