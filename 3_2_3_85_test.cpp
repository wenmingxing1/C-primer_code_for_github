#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    string line;
    cout << "Please input the string line : " << endl;
    getline(cin,line);

    for(decltype(line.size()) index = 0; index != line.size() && !isspace(line[index]); ++index)
        line[index] = toupper(line[index]);

    cout << line << endl;
}
