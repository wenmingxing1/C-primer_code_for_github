#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    //ͳ��ÿ�������������г��ֵĴ�����һ�ַ�������
    map<string, size_t> word_count; //
    string word;
    while (cin >> word)
    {
        //����һ��Ԫ�أ��ؼ��ֵ���word��ֵΪ1
        //��word�Ѿ���word_count�У�insertʲôҲ����
        auto ret = word_count.insert({word, 1});
        if (!ret.second)    //word����word_count��
            ++ret.first->second;    //����������
    }
}
