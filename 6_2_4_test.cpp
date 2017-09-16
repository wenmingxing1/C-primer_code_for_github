#include<iostream>
using namespace std;

void print(const int *beg, const int *end)
{
    //输出beg到end之间的所有元素
    while(beg != end)
        cout << *beg++ << endl;
}

void print(int (&arr)[10])      //括号必不可少，否则 &arr[10] 是将arr声明成了引用的数组
{
    for (auto elem : arr)
        cout << elem << endl;
}

void print(int (*matrix)[10], int rowSize)
int main()
{
//    void print(const int*);
//    void print(const int[]);
//    void print(const int[10]);
//
//    int i = 0, j[2] = {0,1};
//    print(&i);  //正确，&i的类型是int*
//    print(j);   //正确，j转换成int*并执行j[0]

    int j[] = {1,2,3};
    print(begin(j),end(j));

}
