#include<iostream>
#include<string>

using namespace std;

bool lengthCompare(const string &, const string &)

//pfָ��һ���������ú����Ĳ���������const string�����ã�����ֵ��bool
bool (*pf)(const string &, const string &);     //δ��ʼ��

pf = lengthCompare;     //pfָ����ΪlengthCompare�ĺ���
pf = &lengthCompare;    //�ȼ۵ĸ�ֵ��䣬ȡ��ַ��ʱ��ѡ��

bool b1 = pf("hello","goodbye");
bool b2 = (*pf)("hello","goodbye");
bool b3 = lengthCompare("hello","goodbye");

//�������β��Ǻ������ͣ������Զ�ת����ָ������ָ��
void useBigger(const string &s1, const string &s2, bool pf(const string &, const string &))
//�ȼ۵���������ʽ�Ľ��βζ����ָ������ָ��
void useBigger(const string &s1, const string &s2, bool (*pf)(const string &, const string &))

useBigger(s1, s2, lengthCompare);

typedef bool Func(const string &, const string &);
typedef decltype(lengthCompare) Func2;      //�ȼ۵�����

typedef bool (*FuncP)(const string &, const string &);
typedef decltype(lengthCompare) *FuncP2;        //�ȼ۵�����

using F = int(int*, int);       //F�Ǻ������ͣ�����ָ��
using PF = (int*)(int*, int);   //PF��ָ������

PF f1(int);     //��ȷ��PF��ָ������ָ�룬f1����ָ������ָ��
F f1(int);      //����F�Ǻ������ͣ�f1���ܷ���һ������
F *f1(int);     //��ȷ����ʽ��ָ������������ָ������ָ��

int (*f1(int))(int*, int);  //ֱ������f1���������������˳���Ķ���f1���β��б���f1��һ������;
//f1ǰ����*������f1����һ��ָ�룻ָ������ͱ���Ҳ�����β��б����ָ��ָ�������ú����ķ���ֵ��int
