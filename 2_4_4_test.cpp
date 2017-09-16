#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif // SALES_DATA_H

#include<iostream>
using namespace std;

int main()
{
    const int max_files = 20;   //�ǳ������ʽ
    const int limit = max_files + 1;    //�ǳ������ʽ
    int staff_size = 27;    //���ǳ������ʽ
    const int sz = get_size();  //���ǳ������ʽ

    const int *p = nullptr;     //p��һ��ָ�����γ�����ָ��
    constexpr int *q = nullptr;     //q��һ��ָ�������ĳ���ָ��

    typedef double wages;   //wages��double��ͬ���
    typedef wages base, *p;     //base��double��ͬ��ʣ�p��double* ��ͬ���

    using SI = Sales_item;  //SI��Sales_item��ͬ���

    typedef char *pstring;
    const pstring cstr = 0;     //cstr��ָ��char�ĳ���ָ��
    const pstring *ps;      //ps��һ��ָ�룬���Ķ�����ָ��char�ĳ���ָ��

    auto i = 0, *p = &i;    //��ȷ��i�����ͣ�p������ָ��
    auto sz = 0, pi = 3.14;     //����sz��pi�����Ͳ�һ��

    int i = 0, &r = i;
    auto a = r;     //a������
    const int ci = i, &cr = ci;
    auto b = ci;    //b�����ͣ����Զ���const
    auto c = cr;    //c������
    auto d = &i;    //d��һ������ָ��
    auto e = &ci;   //e��һ��ָ�����ͳ�����ָ��

    auto &g = ci;   //g��һ�����ͳ�������
    auto &h = 42;   //���󣬲���Ϊ�ǳ������ð�����ֵ
    const auto &j = 42;     //��ȷ������Ϊ�������ð�����ֵ

    auto k = ci, &l = i;    //k��������l����������
    auto &m = ci, *p = &ci;     //m��һ�������ͳ��������ã�p��ָ�����ͳ�����ָ��
    auto &n = i, *p2 = &ci;     //����i��������int����ci��������const int

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;     //x��������const int
    decltype(cj) y = x;     //y��������const int&�� y�󶨵�����x
    decltype(cj) z;     //����z��һ�����ã������ʼ��

    int i = 42, *p = &i, &r = i;
    decltype(r+0) b;    //��ȷ���ӷ��Ľ����int�����b��һ��int
    decltype(*p) c;     //����c��int&�������ʼ��

    decltype((i)) d;    //����d��int&�������ʼ��
    decltype(i) e;      //��ȷ��e��int




}
