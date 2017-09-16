#include<iostream>
#include<string>
#include<vector>

class SmallInt
{
public:
    SmallInt(int i = 0) :val(i)
    {
        if(i < 0 || i > 255)
            throw out_of_range("Bad SmallInt value");
    }
    operator int() const {return val;}
private:
    size_t val;
};

class SmallInt
{
public:
    //编译器不会自动执行这一类型转换
    explicit operator int() const {return val;}
    //其他成员与之前一致
};
