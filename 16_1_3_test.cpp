#include<iostream>

typedef double A;
template <typename A, typename B> void f(A a, B b)
{
    A tmp = a;  //tmp������Ϊģ�����A�����ͣ�����double
    double B;   //���󣬲�����������ģ�����B
}

//compare��һ��Ĭ��ģ��ʵ��less<T>��һ��Ĭ�Ϻ���ʵ��F()
template <typename T, typename F = less<T>>
int compare(const T &v1, const T &v2, F f = F())
{
    if (f(v1, v2)) return -1;
    if (f(v1, v2)) return 1;
    return 0;
}

bool i = compare(0, 42);    //ʹ��Ĭ��ʵ��less
bool j = compare(item1, item2, compareIsbn);    //��ʹ��Ĭ��ʵ��

template <class T = int> class Numbers
{
public:
    Numbers(T v = 0): val(v) {}
    private T val;
}

Numbers<long double> lots_of_precision;
Numbers<> average_precision;    //��<>��ʾ����ϣ��ʹ��Ĭ��ʵ��

//���������࣬�Ը���ָ��ִ��delete
class DebugDelete
{
public:
    DebugDelete(ostream &s = cerr): os(s) {}
    //���κκ���ģ����ͬ��T�������ɱ������ƶ�
    template <typename T> void operator()(T *p) const
    {os << "deleting unique_ptr" << endl; delete p;}
private:
    ostream &os;
};

double *p = new double;
DebugDelete d;  //����delete���ʽһ��ʹ�õĶ���
d(p);   //����DebugDelete::operator()(double*),�ͷ�p
int *ip = new int;
//��һ����ʱ��DebugDelete�����ϵ���operator()(int*)
DebugDelete()(ip);


//Application.cc
//��Щģ�����ͱ����ڳ�������λ�ý���ʵ����
extern template class Blob<string>;
extern template int compare(const int&, const int&);
Blob<string> sa1, sa2;  //ʵ���������������λ��
int i = compare(a1[0], a2[0]);  //ʵ��������������λ��

//templateBuild.cc
//ʵ�����ļ�����Ϊÿ���������ļ�������Ϊextern�����ͺͺ����ṩһ������extern���Ķ���
template int compare(const int&, const int&);
template class Blob<string>;    //ʵ������ģ������г�Ա

//�������޷��ƶ�T1����δ�����ں��������б���
template <typename T1, typename T2, typename T3>
T1 sum(T2, T3)

//T1����ʽָ���ģ�T2��T3�ǴӺ���ʵ�������ƶ϶�����
auto val3 = sum<long>(i,lng);   //long sum(int,long)



















