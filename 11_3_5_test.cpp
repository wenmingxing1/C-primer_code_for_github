#include<iostream>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
    multimap<string, int> authors = { { "li", 1 }, { "li", 2 }, { "gang", 5 } };
    string search_item = "li";
    //beg��end��ʾ�Դ����ߵ�Ԫ�صķ�Χ
    for (auto beg = authors.lower_bound(search_item), end = authors.upper_bound(search_item); beg != end; ++beg)
        cout << beg->second << endl;


}
