#include<iostream>
using namespace std;

void print(const int *beg, const int *end)
{
    //���beg��end֮�������Ԫ��
    while(beg != end)
        cout << *beg++ << endl;
}

void print(int (&arr)[10])      //���űز����٣����� &arr[10] �ǽ�arr�����������õ�����
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
//    print(&i);  //��ȷ��&i��������int*
//    print(j);   //��ȷ��jת����int*��ִ��j[0]

    int j[] = {1,2,3};
    print(begin(j),end(j));

}
