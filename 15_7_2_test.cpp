#include<iostream>
#include<string>
#include<vector>

using namespace std;

class B
{
public:
    B();
    B(const B&) = delete;
    //������Ա���������ƶ����캯��
};
class D : public B
{
    //û�������κι��캯��
};
D d;    //��ȷ��D�ĺϳ�Ĭ�Ϲ��캯��ʹ��B��Ĭ�Ϲ��캯��
D d2(d);    //����D�ĺϳɿ������캯���Ǳ�ɾ����
D d3(move(d));  //������ʽ��ʹ��D�ı�ɾ���Ŀ������캯��
