#include<iostream>
#include<string>
#include<vector>

using namespace std;

namespace cplusplus_primer
{
    class Sales_data {/* */ };
    Sale_data operator+(const Sales_data&, const Sales_data&);
    class Query {/* */};
    class Query base {/* */};
}   // �����ռ����������ֺ�

// --Sales_data.h--
// #includeӦ�ó����ڴ������ռ�Ĳ���֮ǰ
#include<string>
namespace cplusplus_primer
{
    class Sales_data {/**/};
    Sales_data operator+(const Sales_data&, const Sales_data&);
    //Sales_data�������ӿں���������
}

//--Sales_data.cc--
//ȷ��#include�����ڴ������ռ�Ĳ���֮ǰ
#include "Sales_data.h"
namespace cplusplus_primer
{
    //Sales_data��Ա������������Ķ���
}

// --user.cc--
//Sales_data.hͷ�ļ�������λ�������ռ�cplusplus_primer��
int main()
{
    using cplusplus_primer::Sales_data;
    Sales_data trans1, trans2;
    //...
    return 0;
}

#include "Sales_data.h"

namespace cplusplus_primer
{
    //���´������ռ�cplusplus_primer
    //�����ռ��ж���ĳ�Ա����ֱ��ʹ�����֣���ʱ����ǰ׺
    std::istream& operator>>(std::istream& in, Sales_data& s) {/* */}
}

//�����ռ�֮�ⶨ��ĳ�Ա����ʹ�ú���ǰ׺������
cplusplus_primer::Sales_data cplusplus_primer::operator+(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data ret(lhs);
    //...
}


namespace blip
{
    int i = 16, j = 15, k = 23;
    //��������
}
int j = 0;  //��ȷ��blip��j�����������ռ���
void mainp()
{
    //usingָʾ��blip�е������¡���ӡ���ȫ����������
    using namespace blip;   //���ʹ����j������::j��blip::j֮�������ͻ
    ++i;    //��ȷ����blip��i�趨Ϊ17
    ++j;    //�����Դ�����ȫ�ֵ�j����blip��j
    ++::j;  //��ȷ����ȫ����j�趨Ϊ1
    ++blip::j;  //��ȷ����blip::j�趨Ϊ16
    int k = 97; //��ǰ�ֲ���k������blip::k
    ++k;    //����ǰ�ֲ���k�趨Ϊ98
}

namespace A
{
    class C
    {
        //������Ԫ������Ԫ����֮��û����������
        //��Щ������ʽ�ĳ�Ϊ�����ռ�A�ĳ�Ա
        friend void f2();   //�����������������򲻻ᱻ�ҵ�
        friend void f(const C&);    //����ʵ����صĲ��ҹ�����Ա��ҵ�
    };
}

int main()
{
    A::C cobj;
    f(cobj);    //��ȷ��ͨ��A::C�е���Ԫ�����ҵ�A::f
    f2();   //����A::f2û�б�����
}












