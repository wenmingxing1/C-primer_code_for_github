#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> svec;    //Ĭ�ϳ�ʼ����svec�����κ�Ԫ��
    vector<int> ivec;   //��ʼ��״̬Ϊ��
    //�ڴ˴���ivec���һЩֵ
    vector<int> ivec2<ivec>;    //��ivec��Ԫ�ؿ�����ivec2
    vector<int> ivec3 = ivec;   //��ivec��Ԫ�ؿ�����ivec3
    vector<string> svec(ivec2); //����svec��Ԫ����string���󣬲���int

    vector<string> articles = {"a", "an", "the"};

    vector<string> v1{"a", "an", "the"};    //��ȷ
    vector<string> v2("a", "an","the");     //����

    vector<int> ivec(10,1);     //10��int��Ԫ�أ�ÿ����ֵΪ1

    vector<int> ivec(10);   //10��Ԫ�أ�ÿ������ʼ��Ϊ0

    vector<int> vi = 10;    //���󣬱���ʹ��ֱ�ӳ�ʼ������ʽָ�������Ĵ�С

    vector<int> v1(10);     //��10��Ԫ�أ�ÿ��ֵ����0
    vector<int> v2{10};     //��1��Ԫ�أ�ֵΪ10
    vector<int> v3(10,1);
    vector<int> v4{10,1};

    vector<string> v5{"hi"};    //�б��ʼ����v5��һ��Ԫ��
    vector<string> v6("hi");   //���󣬲���ʹ���ַ�������ֵ������vector����
    vector<string> v7{10};      //��10��Ԫ��
    vector<string> v8{10,"hi"};     //��10��Ԫ��Ϊ��hi��
}
