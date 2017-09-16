#include<iostream>

using namespace std;

int fact(int a)
{
    int product = 1;
    for (int i = a; i > 0; --i)
    {
        product *= i;
    }
    return product;
}
int main()
{
    int x;
    cin >> x;
    cout << fact(x) << endl;
}
