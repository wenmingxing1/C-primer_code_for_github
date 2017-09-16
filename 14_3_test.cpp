#include<iostream>
#include<string>
#include<vector>

bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn() &&
           lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue;
}

bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs);
}

class StrVec
{
public:
    StrVec &operator=(initializer_list<string>);
    //
};

StrVec &StrVec::operator=(initializer_list<string> il)
{
    //alloc_n_copy�����ڴ�ռ䲢�Ӹ�����Χ�ڿ���Ԫ��
    auto data = alloc_n_copy(il.begin(), il.end());
    free(); //���ٶ����еĳ�Ա���ͷ��ڴ�ռ�
    elements = data.first;  //�������ݳ�Աʹ��ָ���¿ռ�
    first_free = cap = data.second;
    return *this;
}

//��Ϊ��Ա�Ķ�Ԫ�����������������󶨵���ʽ��thisָ����
//�ٶ����������ʾ����ͬһ����
Sales_data &Sales_data::operator+=(const Sales_data) &rhs
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

class StrVec
{
public:
    string& operator[](size_t n)
    {
        return elements[n];
    }
    const string& operator[](size_t n) const
    {
        return elements[n];
    }
    //������Ա��֮ǰһ��
private:
    stirng *elements;   //ָ��������Ԫ�ص�ָ��

};

//����svec��һ��StrVec����
const StrVec cvec = svec;   //
//���svec�к���Ԫ�أ��Ե�һ��Ԫ�ؽ���string��empty����
if(svec.size() && sevc[0].empty)
{
    svec[0] = "zero";   //��ȷ���±����������string������
    cvec[0] = "Zip";    //���󣬶�cvecȡ�±귵�ص��ǳ�������
}


class StrBlobPtr
{
public:
    //�����͵ݼ������
    StrBlobPtr& operator++();   //ǰ�������
    StrBlobPtr& operator--();
    //������Ա��֮ǰһ��
};


StrBlobPtr& StrBlobPtr::operator++()
{
    //���curr�Ѿ�ָ����������β��λ�ã����޷�������
    check(curr, "increment past end of StrBlobPtr");
    ++curr; //��curr�ڵ�ǰ״̬����ǰ�ƶ�һ��Ԫ��
    return *this;
}

StrBlobPtr& StrBlobPtr::operator--()
{
    //���curr��0��������ݼ���������һ����Ч�±�
    --curr; //��curr�ڵ�ǰ״̬������ƶ�һ��Ԫ��
    check(curr, "decrement past begin of StrBlobPtr");
    return *this;
}

class StrBlobPtr
{
public:
    //
    StrBlobPtr operator++(int); //���������
    StrBlobPtr operator--(int);
};

StrBlobPtr StrBlobPtr::operator++(int)
{
    //�˴���������Ч�ԣ�����ǰ�õ�������ʱ����Ҫ���
    StrBlobPtr ret = *this; //��¼��ǰ��ֵ
    ++*this;    //��ǰ�ƶ�һ��Ԫ�أ�ǰ��++��Ҫ����������Ч��
    return ret; //����֮ǰ��¼��״̬
}

StrBlobPtr StrBlobPtr::operator--(int)
{
    //
    StrBlobPtr ret = *this;
    --*this;
    return ret;
}

class StrBlobPtr
{
public:
    string& operator*() const
    {
        auto p = check(curr, "difference past end");
        return (*p)[curr];  //��*p���Ƕ�����ָ���vector
    }
    string* operator->() const
    {
        //��ʵ�ʹ���ί�и������������
        return & this->operator*();
    }
    //
};


struct absInt
{
    int operator()(int val) const
    {
        return val < 0 ? -val : val;
    }
};

int i = -42;
absInt absObj;  //���к�������������Ķ���
int ui = absObj(i); //��i���ݸ�absObj.operator()

class PrintString
{
public:
    PrintString(ostream &o = cout, char c = ''):
        os(o), sep(c) {}
    void operator()(const string &s) const {os << s << sep;}
private:
    ostream &os;    //����д���Ŀ����
    char sep;   //���ڽ���ͬ����������ַ�
};

//���ݵ��ʵĳ��ȶ���������򣬶��ڳ�����ͬ�ĵ��ʰ�����ĸ˳������
stable_sort(words.begin(), words.end(),
            [](const string &a, const string &b){return a.size() < b.size();}
           );

class ShorterString
{
public:
    bool operator()(const string &s1, const string &s2) const
    {
        return s1.size() < s2.size();
    }
};

//��õ�һ��ָ����������Ԫ�صĵ���������Ԫ������size() is >= sz
auto wc = find_if(words.begin(), words.end(), [sz](const string &a,){return a.size() >= sz;});

class SizeComp
{
    sizeComp(size_t n) : sz(n) {}   //���βζ�Ӧ����ı���
    //�õ���������ķ������͡��βκͺ����嶼��lambdaһ��
    bool operator()(const string &s) const {return s.size(} >= sz;}
private:
    size_t sz;  //�����ݳ�Ա��Ӧͨ��ֵ����ı���
};


plus<int> intAdd;   //��ִ��int�ӷ��ĺ�����
negate<int> intNegate;  //�ɶ�intȡ���ĺ�������

int sum = intAdd(10, 20);   //�ȼ���sum = 30
sum = intNegate(intAdd(10, 20));    //�ȼ���sum = 30
int _sum = intNegate(-10);  //�ȼ��� _sum = 10

//��ͨ����
int add(int i, int j) {return i+j;}
//lambda���ʽ
auto mod = [](int i, int j){return i%j;}
//����������
struct divides
{
    int operator()(int denominator, int divisor)
    {
        return denominator/divisor;
    }
};










