#include<iostream>
using namespace std;

void swap(int &v1, int &v2)
{
    if(v1 == v2)
        return;
    v1 = v1 + v2;
    v2 = v1 - v2;
    v1 = v1 - v2;
}

int main()
{
    int a = 1;
    int b = 2;
    swap(a,b);
    cout << a << b << endl;

    return 0;
}
