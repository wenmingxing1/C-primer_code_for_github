#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5};
    int val = 10;
    auto result = find(vec.cbegin(), vec.cend(), val);

    //cout << result << endl;
    cout << "The result is " << (result == vec.cend() ? "not present!" : "present!") << endl;

    list<string> s = {"test", "find"};
    string s1 = "test";
    cout << s1 << endl;
    //auto res = find(s.cbegin, s.cend(), s1);
    //cout << "The result is " << (result == s.cend() ? "not present!" : "present!") << endl;

    int ia[] = {27, 210, 12, 47, 109, 83};
    int a = 83;
    int *result_1 = find(begin(ia), end(ia), a);

    cout << *result_1 << endl;

    return 0;
}
