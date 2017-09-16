#include<iostream>

using namespace std;

int main()
{
    int i;
    int *p;

    cout << sizeof(i) << sizeof i << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(*p) << endl;
}
