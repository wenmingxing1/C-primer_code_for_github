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
    //构造函数
    Blob();
    Blob(initializer_list<T> il);
    //Blob中的元素数目
    size_type size()const {return data->size();}
    bool empty() const {return data->empty();}
    //添加和删除元素
    void push_back(const T &t) {data->push_back(t);}
    //移动版本
    void push_back(T &&t) {data->push_back(move(t));}
    void pop_back();
    //元素访问
    T& back();
    T& operator[](size_type i);
private:
    shared_ptr<vector<T>> data;
    //若data[i]无效，则抛出msg
    void check(size_type i, const string &msg) const;
};

template <typename T> void Blob<T>::check(size_type i, const string &msg) const
{
    if (i >= data->size()
        throw std::out_of_range(msg)
}

//前置声明，在将模板的一个特定实例声明为友元时要用到
template <typename T> class Pal;
class C
{
    //C是一个普通的非模板类
    friend class Pal<C>;    //用类C实例化的Pal是C的一个友元
    //Pal2的所有实例都是C的友元；这种情况无须前置声明
    template <typename T> friend class Pal2;
};
template <typename T> class C2
{
    //C2的每个实例将相同实例化的Pal声明为友元
    //C2本身是一个类模板
    friend class Pal<T>;    //Pal的模板声明必须在作用域之内
    //Pal2的所有实例都是C2的每个实例的友元，不需要前置声明
    template <typename X> friend class Pal2;
    //Pal3是一个非模板类，它是C2所有实例的友元
    friend class Pal3;  //不需要Pal3的前置声明
};

template <typename T> class Foo
{
public:
    static size_t count() {return ctr;}
private:
    static size_t ctr;
}



























