#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

class HasPtr
{
public:
    HasPtr(const string &s = string()) : ps(new string(s), i(0)) {}
    //对ps指向的string，每个HasPtr对象都有自己的拷贝
    HasPtr(const HasPtr &p) : ps(new string(*p.ps), i(p.i)) {}
    HasPtr& operator = (const HasPtr &);
    ~HasPtr() {delete ps;}
private:
    string *ps;
    int i;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    auto newp = new string(*rhs.ps);    //拷贝底层string
    delete ps;  //释放旧内存
    ps = newp;  //从右侧运算对象拷贝数据到本对象
    i = rhs.i;
    return *this;   //返回本对象
}

class HasPtr
{
public:
    //构造函数分配新的string和新的计数器，将计数器置为1
    HasPtr(const string &s = string()) : ps(new string(s),i(0), use(new size_t(1))) {}
    //拷贝构造函数拷贝所有三个数据成员，并递增计数器
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) {++*use;}
    HasPtr& operator=(coonst HasPtr&);
    ~HasPtr();
private:
    string *ps;
    int i;
    size_t *use;    //用来记录有多少个对象共享*ps的成员
};

HasPtr::~HasPtr()
{
    if(--*use == 0)
    {
        //如果引用计数变为0
        delete ps;  //释放string的内存
        delete use; //释放计数器内存
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use; //
    if(--*use == 0)
    {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}

int main()
{

}
