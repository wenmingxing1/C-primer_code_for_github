#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<set>



using namespace std;

class Basket
{
public:
    //Basket使用合成的默认构造函数和拷贝控制成员
    void add_item(const shared_ptr<Quote> &sale)
    {
        items.insert(sale);
    }
    //打印每本书的总价和购物篮中所有书的总价
    double total_receipt(ostream&) const;
private:
    //该函数用于比较shared_ptr，multiset成员会用到它
    static bool compare(const shared_ptr<Quote> &lhs, const shared_ptr<Quote> &rhs)
    {
        return lhs->isbn() < rhs->isbn();
    }
    //multiset保存多个报价，按照compare成员排序
    multiset<shared_ptr<Quote>, decltype(compare)*> items{compare;}
};

double Basket::total_receipt(ostream &os) const
{
    double sum = 0.0;
    //iter指向ISBN相同的一批元素中的第一个
    //upper_bound返回一个迭代器，该迭代器指向这批元素的尾后位置
    for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
    {
        //我们知道在当前的Basket中至少有一个该关键字的元素
        //打印该书籍对应的项目
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << endl;    //打印最终的总价格
    return sum;
}

class Quote
{
public:
    //该虚函数返回当前对象的一份动态分配的拷贝
    //这些成员使用的引用限定符参见13.6.3节
    virtual Quote* clone() const & {return new Quote(*this);}
    virtual Quote* clone() && {return new Quote(move(*this));}
    //其他成员与之前一致
};

class Bulk_quote : public Quote
{
    Bulk_quote* clone() const & {return new Bulk_quote(*this);}
    Bulk_quote* clone() && {return new Bulk_quote(move(*this));}
};

void add_item(const Quote& sale)
{
    items.insert(shared_ptr<Quote>(sale.clone()));
}
void add_item(Quote&& sale)
{
    items.insert(shared_ptr<Quote>(move(sale).clone()));
}

































