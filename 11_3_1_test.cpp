#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>

using namespace std;

int main()
{
    map<string, int> word_count= { { "li", 1 }, { "gang", 2 } };
    //���ָ��word_count��һ��Ԫ�صĵ�����
    auto map_it = word_count.begin();
    //*map_it��ָ��һ��pair
    cout << map_it->first << endl;  //��ӡ��Ԫ�ص�key
    cout << map_it->second << endl;    //��ӡ��Ԫ�ص�value
    //map_it->first = "new key";  //����key��const��
    ++map_it->second;   //��ȷ

    set<int> s{0,1,2,3,4,5,6,7,8,9};
    auto set_it = s.begin();
    cout << *set_it << endl;
    *set_it = 42;       //����const


}
