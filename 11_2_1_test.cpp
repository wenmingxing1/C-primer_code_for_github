#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<string>

using namespace std;

int main()
{
    //����һ����20��Ԫ�ص�vector������0��9ÿ����������������
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 10; ++i)
    {
        ivec.push_back(i);
        ivec.push_back(i);  //ÿ�����ظ�����һ��
    }
    //iset��������ivec�Ĳ��ظ�Ԫ�أ�miset��������20��Ԫ��
    set<int> iset(ivec.cbegin(), ivec.cend());
    multiset<int> miset(ivec.cbegin(), ivec.cend());
    cout << ivec.size() << endl;    //��ӡ��20
    cout << iset.size() << endl;    //��ӡ��10
    cout << miset.size() << endl;   //��ӡ��20
}
