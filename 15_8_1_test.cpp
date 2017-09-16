#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<set>



using namespace std;

class Basket
{
public:
    //Basketʹ�úϳɵ�Ĭ�Ϲ��캯���Ϳ������Ƴ�Ա
    void add_item(const shared_ptr<Quote> &sale)
    {
        items.insert(sale);
    }
    //��ӡÿ������ܼۺ͹���������������ܼ�
    double total_receipt(ostream&) const;
private:
    //�ú������ڱȽ�shared_ptr��multiset��Ա���õ���
    static bool compare(const shared_ptr<Quote> &lhs, const shared_ptr<Quote> &rhs)
    {
        return lhs->isbn() < rhs->isbn();
    }
    //multiset���������ۣ�����compare��Ա����
    multiset<shared_ptr<Quote>, decltype(compare)*> items{compare;}
};

double Basket::total_receipt(ostream &os) const
{
    double sum = 0.0;
    //iterָ��ISBN��ͬ��һ��Ԫ���еĵ�һ��
    //upper_bound����һ�����������õ�����ָ������Ԫ�ص�β��λ��
    for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
    {
        //����֪���ڵ�ǰ��Basket��������һ���ùؼ��ֵ�Ԫ��
        //��ӡ���鼮��Ӧ����Ŀ
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << endl;    //��ӡ���յ��ܼ۸�
    return sum;
}

class Quote
{
public:
    //���麯�����ص�ǰ�����һ�ݶ�̬����Ŀ���
    //��Щ��Աʹ�õ������޶����μ�13.6.3��
    virtual Quote* clone() const & {return new Quote(*this);}
    virtual Quote* clone() && {return new Quote(move(*this));}
    //������Ա��֮ǰһ��
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

































