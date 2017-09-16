#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>

using namespace std;

int main()
{
    map<string, int> word_count= { { "li", 1 }, { "gang", 2 } };
    //获得指向word_count中一个元素的迭代器
    auto map_it = word_count.begin();
    //*map_it是指向一个pair
    cout << map_it->first << endl;  //打印此元素的key
    cout << map_it->second << endl;    //打印此元素的value
    //map_it->first = "new key";  //错误，key是const的
    ++map_it->second;   //正确

    set<int> s{0,1,2,3,4,5,6,7,8,9};
    auto set_it = s.begin();
    cout << *set_it << endl;
    *set_it = 42;       //错误，const


}
