#include<iostream>
#include<memory>
#include<vector>
#include<string>

using namespace std;

Blob<string> b1;    //空Blob
{
    //新作用域
    Blob<string> b2 = { "a", "an", "the" };
    b1 = b2;    //b1和b2共享相同的元素
}   //b2被销毁了，但b2中的元素不能销毁
    //b1指向最初由b2创建的元素

class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    //添加和删除元素
    void push_back(const std::string &t) {data->push_back(t);}
    void pop_back();
    //元素访问
    std::string& front();
    std::string& back();

private:
    std::shared_ptr<std::vector<std::string>> data;
    //如果data[i]不合法，抛出一个异常
    void check(size_type i, const std::string &msg) const;
};
/*在此类中，我们实现了size、empty、和push_back成员。这些成员通过指向底层vector的data成员来完成他们的工作.
例如，对一个StrBlob对象调用size()会调用data->size()*/

StrBlob::strBlob() : data(make_shared<vector<string>>())    {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il))   {}

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
}

string& StrBlob::front()
{
    //如果vector为空，check会抛出一个异常
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}




int main()
{

}
