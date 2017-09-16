#include<iostream>
#include<string>
#include<vector>

StrVec::StrVec(StrVec &&s) noexcept //�ƶ�������Ӧ�׳��κ��쳣
//��Ա��ʼ�����ӹ�s�е���Դ
  : elements(s.elements), first_free(s.first_free), cap(s.cap)
  {
      //��s����������״̬--����������������ʱ��ȫ��
      s.elements = s.first_free = s.cap = nullptr;
  }


StrVec &StrVec::operator=(StrVec &&rhs) noexcept
{
    //ֱ�Ӽ���Ը�ֵ
    if(this != &ths)    //�����ͬ�������Ը�ֵ�����ǲ�������κβ���
    {
        free(); //�ͷ�����Ԫ��
        elements = rhs.elements;    //��rhs�ӹ���Դ
        first_free = rhs.first_free;
        cap = rhs.cap;
        //��rhs���ڿ�����״̬
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}

class HasPtr
{
public:
    //����ƶ����캯��
    HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i), {p.ps = 0;}
    //��ֵ����������ƶ���ֵ�������Ҳ�ǿ�����ֵ�����
    HasPtr& operator=(HasPtr rhs) {swap(*this, ths); return *this;}
    //������Ա��ͬ
};
