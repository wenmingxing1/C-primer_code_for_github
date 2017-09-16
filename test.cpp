#include<iostream>

using namespace std;

void func(int i)
{
    cout << i << endl;
}

int main()
{
    const int i = 1;

    func(i);
//    int j = i;
//    //i = j;
//
//    cout << i << endl;
}
