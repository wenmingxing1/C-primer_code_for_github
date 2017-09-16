#include<iostream>
#include<string>

using namespace std;

bool lengthCompare(const string &, const string &)

//pf指向一个函数，该函数的参数是两个const string的引用，返回值是bool
bool (*pf)(const string &, const string &);     //未初始化

pf = lengthCompare;     //pf指向名为lengthCompare的函数
pf = &lengthCompare;    //等价的赋值语句，取地址符时可选的

bool b1 = pf("hello","goodbye");
bool b2 = (*pf)("hello","goodbye");
bool b3 = lengthCompare("hello","goodbye");

//第三个形参是函数类型，它会自动转换成指向函数的指针
void useBigger(const string &s1, const string &s2, bool pf(const string &, const string &))
//等价的声明，显式的将形参定义成指向函数的指针
void useBigger(const string &s1, const string &s2, bool (*pf)(const string &, const string &))

useBigger(s1, s2, lengthCompare);

typedef bool Func(const string &, const string &);
typedef decltype(lengthCompare) Func2;      //等价的类型

typedef bool (*FuncP)(const string &, const string &);
typedef decltype(lengthCompare) *FuncP2;        //等价的类型

using F = int(int*, int);       //F是函数类型，不是指针
using PF = (int*)(int*, int);   //PF是指针类型

PF f1(int);     //正确，PF是指向函数的指针，f1返回指向函数的指针
F f1(int);      //错误，F是函数类型，f1不能返回一个函数
F *f1(int);     //正确，显式的指定返回类型是指向函数的指针

int (*f1(int))(int*, int);  //直接声明f1，按照由内向外的顺序阅读，f1有形参列表，则f1是一个函数;
//f1前面有*，所以f1返回一个指针；指针的类型本身也包含形参列表，因此指针指向函数，该函数的返回值是int
