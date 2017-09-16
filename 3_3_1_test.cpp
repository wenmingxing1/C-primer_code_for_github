#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> svec;    //默认初始化，svec不含任何元素
    vector<int> ivec;   //初始化状态为空
    //在此处给ivec添加一些值
    vector<int> ivec2<ivec>;    //把ivec的元素拷贝给ivec2
    vector<int> ivec3 = ivec;   //把ivec的元素拷贝给ivec3
    vector<string> svec(ivec2); //错误，svec的元素是string对象，不是int

    vector<string> articles = {"a", "an", "the"};

    vector<string> v1{"a", "an", "the"};    //正确
    vector<string> v2("a", "an","the");     //错误

    vector<int> ivec(10,1);     //10个int型元素，每个赋值为1

    vector<int> ivec(10);   //10个元素，每个都初始化为0

    vector<int> vi = 10;    //错误，必须使用直接初始化的形式指定向量的大小

    vector<int> v1(10);     //有10个元素，每个值都是0
    vector<int> v2{10};     //有1个元素，值为10
    vector<int> v3(10,1);
    vector<int> v4{10,1};

    vector<string> v5{"hi"};    //列表初始化，v5有一个元素
    vector<string> v6("hi");   //错误，不能使用字符串字面值来构建vector对象
    vector<string> v7{10};      //有10个元素
    vector<string> v8{10,"hi"};     //有10个元素为“hi”
}
