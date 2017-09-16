#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char ca[] = {'C', '+' ,'+'};    //不以空字符结束
    cout << strlen(ca) << endl;     //严重错误，ca没有以空字符结束

    size_t cnt= 0;
    for(auto &row : ia)     //对于外层数组的每一个元素
        for(auto &col : row)    //对于内层数组的每一个元素
    {
        col = cnt;      //将下一个值赋给该元素
        ++cnt;
    }

    for(const auto &row : ia)
        for(auto col : row)
        cout << col << endl;

    for(auto row : ia)
        for(auto col : row)

    using int_array = int[4];       //新标准下类型别名的声明
    typedef int int_array[4];       //等价的typedef声明
    for(int_array *p = ia; p != ia+3; ++p)
    {
        for(int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        count << endl;
    }
}
