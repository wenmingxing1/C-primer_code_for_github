#include<iostream>
#include<memory>
#include<string>

using namespace std;

//��vector���ڴ������Եļ�ʵ��
class StrVec
{
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}  //allocator��Ա����Ĭ�ϳ�ʼ��
    StrVec(const StrVec&);  //�������캯��
    StrVec &operator = (const StrVec&); //������ֵ�����
    ~StrVec();

    void push_back(const string&);  //����Ԫ��
    size_t size() const {return first_free - elements;}
    size_t capacity() const {return cap - elements;}
    string *begin() const {return elements;}
    string *end() const {return first_free;}
    //...
private:
    static allocator<string> alloc; //����Ԫ��
    //�����Ԫ�صĺ�����ʹ��
    void chk_n_alloc() {if (size() == capacity()) reallocate();}
    //���ߺ��������������캯������ֵ�����������������ʹ��
    pair<string*, string*> alloc_n_copy (const string*, const string*);
    void free();    //����Ԫ�ز��ͷ��ڴ�
    void reallocate();  //��ø����ڴ沢��������Ԫ��
    string *elements;   //ָ��������Ԫ�ص�ָ��
    string *first_free; //ָ�������һ������Ԫ�ص�ָ��
    string *cap;    //ָ������β��λ�õ�ָ��
};

void StrVec::push_back(const string& s)
{
    chk_n_alloc();  //ȷ���пռ�������Ԫ��
    //��first_freeָ���Ԫ���й���s�ĸ���
    alloc.construct(first_free++, s);
}


pair<string*, string*> StrVec::alloc_n_copy(const string *b, const string *e)
{
    //����ռ䱣�������Χ�е�Ԫ��
    auto data = alloc.allocate(e - b);
    //��ʼ��������һ��pair����pair��data��uninitialized_copy�ķ���ֵ����
    return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
    //���ܴ��ݸ�deallocateһ����ָ�룬���elementsΪ0������ʲô������
    if (elements)
    {
        //�������پ�Ԫ��
        for (auto p = first_free; p != elements; /*��*/)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap - elements);
    }
}


StrVec::StrVec(const StrVec &s)
{
    //����alloc_n_copy����ռ���������s��һ�����Ԫ��
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec����~StrVec() {free();}

StrVec &StrVec::operator=(const StrVec &rhs)
{
    //����alloc_n_copy�����ڴ棬��С��rhs��Ԫ��ռ�ÿռ�һ����
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::reallocate()
{
    //���ǽ����䵱ǰ��С�������ڴ�ռ�
    auto newcapacity = size() ? 2*size() :1;
    //�������ڴ�
    auto newdata = alloc.allocate(newcapacity);
    //�����ݴӾ��ڴ��ƶ������ڴ�
    auto dest = newdata;    //ָ������������һ������λ��
    auto elem = elements;   //ָ�����������һ��Ԫ��
    for(size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, move(*elem++));
    free(); //һ�������ƶ���Ԫ�ؾ��ͷžɿռ��ڴ�
    //�������ǵ����ݽṹ��ִ����Ԫ��
    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}
