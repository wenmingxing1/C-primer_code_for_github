#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string line;
    cout << "Please input the string line : " << endl;
    getline(cin,line);

    for(auto c : line)
        c = toupper(c);

    cout << "The new line is : " << line << endl;
}
