#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void func()
{
    size_t v1 = 42;
    auto f = [v1]()mutable{return ++v1;};
    v1 = 0;
    auto j = f();
    cout << j << endl;
}

int main()
{
    func();
}
