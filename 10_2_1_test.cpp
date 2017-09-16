#include<iostream>
#include<numeric>
#include<vector>
#include<string>
#include<list>

using namespace std;

int main()
{
    vector<string> vec{"I", " ", "love", " ", "you", " ", "!"};
    auto result = accumulate(vec.cbegin(), vec.cend(), string(""));
    cout << result << endl;

    list<string> vec2{"I", " "};
    cout << equal(vec.cbegin(), vec.cend(), vec2.cbegin()) << endl;
}
