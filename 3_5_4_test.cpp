#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char ca[] = {'C', '+' ,'+'};    //���Կ��ַ�����
    cout << strlen(ca) << endl;     //���ش���caû���Կ��ַ�����

    size_t cnt= 0;
    for(auto &row : ia)     //������������ÿһ��Ԫ��
        for(auto &col : row)    //�����ڲ������ÿһ��Ԫ��
    {
        col = cnt;      //����һ��ֵ������Ԫ��
        ++cnt;
    }

    for(const auto &row : ia)
        for(auto col : row)
        cout << col << endl;

    for(auto row : ia)
        for(auto col : row)

    using int_array = int[4];       //�±�׼�����ͱ���������
    typedef int int_array[4];       //�ȼ۵�typedef����
    for(int_array *p = ia; p != ia+3; ++p)
    {
        for(int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        count << endl;
    }
}
