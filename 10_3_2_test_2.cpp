#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    vector<string> words{"word", "This", "is", "a" };
    for (auto i : words)
        cout << i << " ";
    cout << endl;

    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2){return s1.size() < s2.size();});
    for (auto i : words)
        cout << i << " ";
    cout << endl;

    return 0;

}

//for_each(wc,words.end(), [](const string &s){return cout << s << " ";});
