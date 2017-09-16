#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<10;i++)
    {
        cout << i << endl;
    }

    //cout << i << endl;
}



//int units_sold = 0;
//int units_sold = {0};
//int units_sold{0};
//int units_sold(0);
//
//long double ld = 3.1415926536;
//int a{ld},b={ld};   //错误，转换未执行，因为存在丢失信息的风险
//int c{ld},d = ld;   //正确，转换执行，且确实丢失了信息
//
//extern int i;   //声明i而非定义i
//int j;  //声明并定义j
