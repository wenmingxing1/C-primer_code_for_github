#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name = "AnnaBelle";
    auto pos1 = name.find("Anna");

    auto pos2 = name.find("anna");
    cout << pos1 << endl;
    cout << pos2 << endl;

    string numbers("0123456789"), s("r2d2");
    auto pos = s.find_first_of(numbers);
    cout << pos << endl;
}

string::size_type pos = 0;
while((pos = name.find_first_of(numbers,pos)) != string::npos)
{
    cout << "found number at index: " << pos << " element is " << name[pos] << endl;
    ++pos;
}
