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
    //�����������Զ�ִ����һ����ת��
    explicit operator int() const {return val;}
    //������Ա��֮ǰһ��
};
