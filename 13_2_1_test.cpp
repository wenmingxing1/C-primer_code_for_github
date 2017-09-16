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
    //��psָ���string��ÿ��HasPtr�������Լ��Ŀ���
    HasPtr(const HasPtr &p) : ps(new string(*p.ps), i(p.i)) {}
    HasPtr& operator = (const HasPtr &);
    ~HasPtr() {delete ps;}
private:
    string *ps;
    int i;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    auto newp = new string(*rhs.ps);    //�����ײ�string
    delete ps;  //�ͷž��ڴ�
    ps = newp;  //���Ҳ�������󿽱����ݵ�������
    i = rhs.i;
    return *this;   //���ر�����
}

class HasPtr
{
public:
    //���캯�������µ�string���µļ�����������������Ϊ1
    HasPtr(const string &s = string()) : ps(new string(s),i(0), use(new size_t(1))) {}
    //�������캯�����������������ݳ�Ա��������������
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) {++*use;}
    HasPtr& operator=(coonst HasPtr&);
    ~HasPtr();
private:
    string *ps;
    int i;
    size_t *use;    //������¼�ж��ٸ�������*ps�ĳ�Ա
};

HasPtr::~HasPtr()
{
    if(--*use == 0)
    {
        //������ü�����Ϊ0
        delete ps;  //�ͷ�string���ڴ�
        delete use; //�ͷż������ڴ�
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
