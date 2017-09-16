#include<iostream>
#include<string>
#include<cstring>

using namespace std;

template <unsigned N, unsigned M>
int compare2(const char (&p1)[N], const char (&p2)[M])
{
    return strcmp(p1, p2);
}

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1<v2) return -1;
    if (v2<v1) return 1;
    return 0;
}

int main()
{
    cout << compare(1, 2) << endl;

    cout << compare2("hi", "mam") << endl;
    return 0;

}

template <typename T> class Blob
{
public:
    typedef T value_type;
    typedef typename vector<T>::size_type size_type;
    //���캯��
    Blob();
    Blob(initializer_list<T> il);
    //Blob�е�Ԫ����Ŀ
    size_type size()const {return data->size();}
    bool empty() const {return data->empty();}
    //��Ӻ�ɾ��Ԫ��
    void push_back(const T &t) {data->push_back(t);}
    //�ƶ��汾
    void push_back(T &&t) {data->push_back(move(t));}
    void pop_back();
    //Ԫ�ط���
    T& back();
    T& operator[](size_type i);
private:
    shared_ptr<vector<T>> data;
    //��data[i]��Ч�����׳�msg
    void check(size_type i, const string &msg) const;
};

template <typename T> void Blob<T>::check(size_type i, const string &msg) const
{
    if (i >= data->size()
        throw std::out_of_range(msg)
}

//ǰ���������ڽ�ģ���һ���ض�ʵ������Ϊ��ԪʱҪ�õ�
template <typename T> class Pal;
class C
{
    //C��һ����ͨ�ķ�ģ����
    friend class Pal<C>;    //����Cʵ������Pal��C��һ����Ԫ
    //Pal2������ʵ������C����Ԫ�������������ǰ������
    template <typename T> friend class Pal2;
};
template <typename T> class C2
{
    //C2��ÿ��ʵ������ͬʵ������Pal����Ϊ��Ԫ
    //C2������һ����ģ��
    friend class Pal<T>;    //Pal��ģ������������������֮��
    //Pal2������ʵ������C2��ÿ��ʵ������Ԫ������Ҫǰ������
    template <typename X> friend class Pal2;
    //Pal3��һ����ģ���࣬����C2����ʵ������Ԫ
    friend class Pal3;  //����ҪPal3��ǰ������
};

template <typename T> class Foo
{
public:
    static size_t count() {return ctr;}
private:
    static size_t ctr;
}



























