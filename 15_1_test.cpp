#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Quote
{
public:
    string isbn() const;
    virtual double net_price(size_t n) const;       //定义为虚函数
};

class Bulk_quote : public Quote     //Bulk_Quote继承了Quote
{
public:
    double net_price(size_t) const override;
};

doubld price_total(ostream &os, const Quote &item, size_t n)
{
    //根据传入item形参的对象类型调用Quote::net_price
    //或者Bulk_Quote::net_price
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

//basic 的类型是Quote，bulk的类型是Bulk_quote
print_total(cout, basic, 20);   //调用Quote的net_price
print_total(cout, bulk, 20);    //调用Bulk_quote的net_price

class Quote
{
public:
    Quote() = default;
    Quote(const string &book, double sales_price): bookNo(book), price(sales_price) {}
    string isbn() const {return bookNo;}
    //返回给定数量的书籍的销售总额
    //派生类负责改写并使用不同的折扣计算算法
    virtual double net_price(size_t n) const
    {
        return n * prict;
    }
    virtual ~Quote() = default; //对析构函数进行动态绑定
private:
    string bookNo;
protected:
    double price = 0.0; //代表普通状态下不打折的价格
};

class Bulk_quote : public Quote     //
{
public:
    Bulk_quote() = default;
    Bulk_quote(const string&, double, size_t, double);
    //覆盖基类的函数版本以实现大于购买的折扣政策
    double net_price(size_t) const override;
private:
    size_t min_qty = 0; //适用折扣的最低购买量
    double discount = 0.0;  //以小数表示折扣
};

Bulk_quote(const string& book, double p, size_t qty, double disc) :
    Quote(book, p), min_qty(qty), discount(disc) {}

//如果达到了购买书籍的某个最低限量值，就可以享受折扣价格了
double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}

//用于保存折扣之和购买量的类，派生类使用这些数据可以实现不同的价格策略
class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const string& book, double price, size_t qty, double disc):
        Quote(book, price), quantity(qty), discount(disc) {}
        double net_price(size_t) const = 0;
protected:
    size_t quantity = 0;    //折扣适用的购买量
    double discount = 0.0;  //表示折扣的小数值
};


//当同一书籍的销售量超过某个值时启用折扣
//折扣的值是一个小于1的正的小数值，以此来降低正常销售价格
class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const string& book, double price, size_t qty, double disc):
        Disc_quote(book, price, qty, disc) {}
    //覆盖基类中的函数版本以实现一种新的折扣策略
    double net_price(size_t) const override;
};


class Base
{
protected:
    int prot_mem;   //受保护的成员
};
class Sneaky : public Base
{
    friend void clobber(Sneaky&);   //能访问Sneaky::prot_mem
    friend void clobber(Base&); //不能访问Base::prot_mem
    int j;  //j默认是private
};
//正确，clobber能访问Sneaky对象的private和protected成员
void clobber(Sneaky &s) {s.j = s.prot_mem = 0;}
//错误，吃咯版本而不能访问Base的protected成员
void clobber(Base &b) {b.prot_mem = 0;}

class Base
{
public:
    void pub_mem(); //
protected:
    int prot_mem;   //
private:
    priv_mem;   //
};
struct Pud_Drev : public Base
{
    //正确，派生类成员能访问protected成员
    int f() {return prot_mem;}
    //错误，private成员对于派生类来说是不可访问的
    char g() {return priv_mem;}
};
struct priv_Derv : private Base
{
    //private不影响派生类的访问权限
    int f1() const {return prot_men;}
};



class Base
{
public:
    size_t size() const {return n;}
protected:
    size_t n;
};
class Derived : private Base
{
public:
    using Base::size;
protected:
    using Base::n;
};
















