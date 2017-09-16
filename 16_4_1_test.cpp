#include<iostream>
#include<string>
#include<vector>
//#include<>

using namespace std;

//������ֲ�ݹ鲢��ӡ���һ��Ԫ�صĺ���
//�˺��������ڿɱ�����汾��print����֮ǰ����
template <typename T> ostream &print(ostream &os, const T &t)
{
    return os << t; //�������һ��Ԫ��֮�󲻴�ӡ�ָ���
}
//���г������һ��Ԫ��֮�������Ԫ�ض����������汾��print����
template <typename T, typename... Args> ostream &print(ostream &os, const T &t, const Args&... rest)
{
    os << t << " , " ;  //��ӡ��һ��ʵ��
    return print(os, rest...);  //�ݹ���ã���ӡ����ʵ��
}

int main()
{
    string s = "This is a string!";
    double i = 234.234523;
    print(cout, i, s, 42);

    return 0;
}
