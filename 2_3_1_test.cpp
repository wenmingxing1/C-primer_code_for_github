#include<iostream>
using namespace std;

int main()
{
    int i = 9;
    int &ii = i;
    cout << ii << endl;
    ii = 10;
    cout << ii << endl << i << endl;;
}
