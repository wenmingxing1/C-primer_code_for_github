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
    //alloc_n_copy分配内存空间并从给定范围内拷贝元素
    auto data = alloc_n_copy(il.begin(), il.end());
    free(); //销毁对象中的成员并释放内存空间
    elements = data.first;  //更新数据成员使其指向新空间
    first_free = cap = data.second;
    return *this;
}

//作为成员的二元运算符，左侧运算对象绑定到隐式的this指针中
//假定两个对象表示的是同一本书
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
    //其他成员与之前一致
private:
    stirng *elements;   //指向数组首元素的指针

};

//假设svec是一个StrVec对象
const StrVec cvec = svec;   //
//如果svec中含有元素，对第一个元素进行string的empty函数
if(svec.size() && sevc[0].empty)
{
    svec[0] = "zero";   //正确，下标运算符返回string的引用
    cvec[0] = "Zip";    //错误，对cvec取下标返回的是常量引用
}


class StrBlobPtr
{
public:
    //递增和递减运算符
    StrBlobPtr& operator++();   //前置运算符
    StrBlobPtr& operator--();
    //其他成员与之前一致
};


StrBlobPtr& StrBlobPtr::operator++()
{
    //如果curr已经指向了容器的尾后位置，则无法递增它
    check(curr, "increment past end of StrBlobPtr");
    ++curr; //将curr在当前状态下向前移动一个元素
    return *this;
}

StrBlobPtr& StrBlobPtr::operator--()
{
    //如果curr是0，则继续递减它将产生一个无效下标
    --curr; //将curr在当前状态下向后移动一个元素
    check(curr, "decrement past begin of StrBlobPtr");
    return *this;
}

class StrBlobPtr
{
public:
    //
    StrBlobPtr operator++(int); //后置运算符
    StrBlobPtr operator--(int);
};

StrBlobPtr StrBlobPtr::operator++(int)
{
    //此处无须检查有效性，调用前置递增运算时才需要检查
    StrBlobPtr ret = *this; //记录当前的值
    ++*this;    //向前移动一个元素，前置++需要检查递增的有效性
    return ret; //返回之前记录的状态
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
        return (*p)[curr];  //（*p）是对象所指向的vector
    }
    string* operator->() const
    {
        //将实际工作委托给解引用运算符
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
absInt absObj;  //含有函数调用运算符的对象
int ui = absObj(i); //将i传递给absObj.operator()

class PrintString
{
public:
    PrintString(ostream &o = cout, char c = ''):
        os(o), sep(c) {}
    void operator()(const string &s) const {os << s << sep;}
private:
    ostream &os;    //用于写入的目的流
    char sep;   //用于将不同输出隔开的字符
};

//根据单词的长度对其进行排序，对于长度相同的单词按照字母顺序排序
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

//获得第一个指向满足条件元素的迭代器，该元素满足size() is >= sz
auto wc = find_if(words.begin(), words.end(), [sz](const string &a,){return a.size() >= sz;});

class SizeComp
{
    sizeComp(size_t n) : sz(n) {}   //该形参对应捕获的变量
    //该调用运算符的返回类型、形参和函数体都与lambda一致
    bool operator()(const string &s) const {return s.size(} >= sz;}
private:
    size_t sz;  //该数据成员对应通过值捕获的变量
};


plus<int> intAdd;   //可执行int加法的函数对
negate<int> intNegate;  //可对int取反的函数对象

int sum = intAdd(10, 20);   //等价于sum = 30
sum = intNegate(intAdd(10, 20));    //等价于sum = 30
int _sum = intNegate(-10);  //等价于 _sum = 10

//普通函数
int add(int i, int j) {return i+j;}
//lambda表达式
auto mod = [](int i, int j){return i%j;}
//函数对象类
struct divides
{
    int operator()(int denominator, int divisor)
    {
        return denominator/divisor;
    }
};










