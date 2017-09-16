#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string line;
    cout << "Please input the line : " << endl;
    getline(cin,line);

    decltype(line.size()) punct_cnt = 0;

    for (auto c : line)
        if(ispunct(c))
            ++punct_cnt;

    cout << " has " << punct_cnt << " punctuations!" << endl;
}
