#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Quote
{
public:
    string isbn() const;
    virtual double net_price(size_t n) const;       //����Ϊ�麯��
};

class Bulk_quote : public Quote     //Bulk_Quote�̳���Quote
{
public:
    double net_price(size_t) const override;
};

doubld price_total(ostream &os, const Quote &item, size_t n)
{
    //���ݴ���item�βεĶ������͵���Quote::net_price
    //����Bulk_Quote::net_price
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

//basic ��������Quote��bulk��������Bulk_quote
print_total(cout, basic, 20);   //����Quote��net_price
print_total(cout, bulk, 20);    //����Bulk_quote��net_price

class Quote
{
public:
    Quote() = default;
    Quote(const string &book, double sales_price): bookNo(book), price(sales_price) {}
    string isbn() const {return bookNo;}
    //���ظ����������鼮�������ܶ�
    //�����ฺ���д��ʹ�ò�ͬ���ۿۼ����㷨
    virtual double net_price(size_t n) const
    {
        return n * prict;
    }
    virtual ~Quote() = default; //�������������ж�̬��
private:
    string bookNo;
protected:
    double price = 0.0; //������ͨ״̬�²����۵ļ۸�
};

class Bulk_quote : public Quote     //
{
public:
    Bulk_quote() = default;
    Bulk_quote(const string&, double, size_t, double);
    //���ǻ���ĺ����汾��ʵ�ִ��ڹ�����ۿ�����
    double net_price(size_t) const override;
private:
    size_t min_qty = 0; //�����ۿ۵���͹�����
    double discount = 0.0;  //��С����ʾ�ۿ�
};

Bulk_quote(const string& book, double p, size_t qty, double disc) :
    Quote(book, p), min_qty(qty), discount(disc) {}

//����ﵽ�˹����鼮��ĳ���������ֵ���Ϳ��������ۿۼ۸���
double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}

//���ڱ����ۿ�֮�͹��������࣬������ʹ����Щ���ݿ���ʵ�ֲ�ͬ�ļ۸����
class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const string& book, double price, size_t qty, double disc):
        Quote(book, price), quantity(qty), discount(disc) {}
        double net_price(size_t) const = 0;
protected:
    size_t quantity = 0;    //�ۿ����õĹ�����
    double discount = 0.0;  //��ʾ�ۿ۵�С��ֵ
};


//��ͬһ�鼮������������ĳ��ֵʱ�����ۿ�
//�ۿ۵�ֵ��һ��С��1������С��ֵ���Դ��������������ۼ۸�
class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const string& book, double price, size_t qty, double disc):
        Disc_quote(book, price, qty, disc) {}
    //���ǻ����еĺ����汾��ʵ��һ���µ��ۿ۲���
    double net_price(size_t) const override;
};


class Base
{
protected:
    int prot_mem;   //�ܱ����ĳ�Ա
};
class Sneaky : public Base
{
    friend void clobber(Sneaky&);   //�ܷ���Sneaky::prot_mem
    friend void clobber(Base&); //���ܷ���Base::prot_mem
    int j;  //jĬ����private
};
//��ȷ��clobber�ܷ���Sneaky�����private��protected��Ա
void clobber(Sneaky &s) {s.j = s.prot_mem = 0;}
//���󣬳Կ��汾�����ܷ���Base��protected��Ա
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
    //��ȷ���������Ա�ܷ���protected��Ա
    int f() {return prot_mem;}
    //����private��Ա������������˵�ǲ��ɷ��ʵ�
    char g() {return priv_mem;}
};
struct priv_Derv : private Base
{
    //private��Ӱ��������ķ���Ȩ��
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
















