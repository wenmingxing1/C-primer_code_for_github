#include<iostream>
#include<vector>

using namespace std;

void fcn1()
{
    size_t v1 = 42;
    auto f = [v1]{return v1;};
    v1 = 0;
    auto j = f();
    cout << j << endl;
}

void fcn2()
{
    size_t v2 = 42;
    auto f = [&v2]{return v2;};
    v2 = 0;
    auto j = f();
    cout << j << endl;
}

int main()
{
    fcn1();
    fcn2();

    return 0;

}

wc = find_if(words.begin(), words.end(), [=](const string &s){return s.size() >= sz;});
