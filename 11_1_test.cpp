#include<iostream>
#include<string>
#include<map>
#include<set>

using namespace std;

int main()
{
    set<string> exclude{ "the", "a", "an", "and", "or" };
    //ͳ��ÿ�������������г��ִ���
    map<string, size_t> word_count; //string��size_t�Ŀ�map
    string word;
    while (cin >> word)
        //ֻͳ�Ʋ���set�еĵ���
        if (exclude.find(word) == exclude.end())
            ++word_count[word]; //��ȡword�ļ���������1

    for(const auto &w : word_count) //��map�е�ÿ��Ԫ��
        //��ӡ���
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << endl;
}
