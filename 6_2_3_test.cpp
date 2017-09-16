#include<iostream>

using namespace std;

int main()
{
    void fcn(const int i)   //fcn 能读取i，但是不能向i写值
    void fcn(int i)     //错误，重复定义了fcn(int)

    int i = 0;
    const int ci = i;   //非常量初始化底层const
    string::size_type ctr = 0;
    reset(&i);  //调用形参类型为int* 的reset函数
    reset(&ci);     //错误，不能用常量对象初始化非常量形参
    reset(i);   //调用形参类型为int& 的reset函数
    reset(ci);      //错误，不能把普通引用绑定到const对象ci上
    reset(42);      //错误，不能把普通引用绑定到字面值上
    reset(ctr);     //错误，类型不匹配，ctr为无符号类型

    //不良设计，第一个形参的类型应该为const string&
    string::size_type find_char(string &s,char c,string::size_type &occurs)

    find_char("Hello World",'o',ctr);

    bool is_sentence(const string &s)
    {
        //如果在s的末尾有且只有一个句号，则s是一个句子
        string::size_type ctr = 0;
        return find_char(s,'.',ctr) == s.size()-1 && ctr == 1;
    }
}
