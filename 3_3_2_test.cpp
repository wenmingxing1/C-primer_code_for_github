#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<int> v2;
    for(int i = 0;i != 100; ++i)
    {
        v2.push_back(i);
    }

    vector<string> text;
    string word;
    while(cin >> word)
        text.push_back(word);

    for(auto i : v2)
        cout << endl;

    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i : v)
        i *= i;
    for (auto i : v)
        cout << i << endl;

    vector<unsigned> scores(11,0);  //11�������Σ�ȫ����ʼ��Ϊ0
    unsigned grade;
    while(cin >> grade)     //��ȡ�ɼ�
    {
        if(grade <= 100)
            ++scores[grade/10];     //����Ӧ�����εļ���ֵ��1
    }

    vector<int> ivec;
    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
        ivec[ix] = ix;      //���ش���

    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
        ivec.push_back(ix);     //��ȷ
}
