#include<iostream>
#include<string>
#include<vector>

StrVec::StrVec(StrVec &&s) noexcept //移动操作不应抛出任何异常
//成员初始化器接管s中的资源
  : elements(s.elements), first_free(s.first_free), cap(s.cap)
  {
      //令s进入这样的状态--对其运行析构函数时安全的
      s.elements = s.first_free = s.cap = nullptr;
  }


StrVec &StrVec::operator=(StrVec &&rhs) noexcept
{
    //直接检测自赋值
    if(this != &ths)    //如果相同，则是自赋值，我们不用完成任何操作
    {
        free(); //释放已有元素
        elements = rhs.elements;    //从rhs接管资源
        first_free = rhs.first_free;
        cap = rhs.cap;
        //将rhs置于可析构状态
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}

class HasPtr
{
public:
    //添加移动构造函数
    HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i), {p.ps = 0;}
    //赋值运算符即是移动赋值运算符，也是拷贝赋值运算符
    HasPtr& operator=(HasPtr rhs) {swap(*this, ths); return *this;}
    //其他成员相同
};
