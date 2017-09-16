#include<iostream>
 using namespace std;

 int main()
 {
     int ival = 1;
     ival + 5;  //一条没有实际作用的表达式语句，虽然执行了加法但是相加的结果并没有被使用。
     cout << ival;

     //重复读入数据直到到达文件末尾或某次输入的值等于sought
     while(cin >> s && s != sought)
        ;   //空语句
 }
