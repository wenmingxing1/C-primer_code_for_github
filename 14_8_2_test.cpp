#include<iostream>
#include<functional>
#include<map>
#include<cmath>

using namespace std;

int add(int i, int j)
{
    return i+j;
}

struct divide
{
    int operator()(int denominator, int divisor)
    {
        return denominator/divisor;
    }
};


int main()
{
    function<int(int, int)> f1 = add;    //函数指针
    function<int(int, int)> f2 = divide();   //函数对象类的对象
    function<int(int, int)> f3 = [](int i, int j){return i*j;};   //lambda

    cout << f1(4, 2) << endl;
    cout << f2(4, 2) << endl;
    cout << f3(4, 2) << endl;

    map<string, function<int(int, int)>> binops =
    {
        {"+", add},
        //{"-", minus<int> },
        {"/", divide()},
        {"*", [](int i, int j){return i*j;}},
        //{"%", mod}
    };

    cout << binops["+"](10,5) << endl;


    return 0;
}
//    plus<int> intAdd;
//    negate<int> intNegate;
//
//    int sum = intAdd(10, 20);
//    cout << sum << endl;
//    sum = intNegate(-10);
//    cout << sum << endl;

