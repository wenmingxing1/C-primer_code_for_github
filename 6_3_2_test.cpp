#include<iostream>
#include<string>

using namespace std;

//char &get_val(string &str,string::size_type ix)
//{
//    return str[ix];     //get_val�ٶ�����ֵ����Ч��
//}
//
//int main()
//{
//    string s("a value");
//    cout << s << endl;
//    get_val(s,0) = 'A';
//    cout << s<< endl;
//}
//
//vector<string> process()
//{
//    //expected �� actual ��string����
//    if(expected.empty())
//        return {};      //����һ���յ�vector����
//    else if (excepted == actual)
//        return {"functionX", "Okay"};       //�����б��ʼ����vector����
//    else
//        return {"functionX", expected, actual};
//}

//const string &mainp()
//{
//    string ret;
//    if(!ret.empty())
//        return ret;     //���󣬷��ؾֲ����������ã�
//    else
//        return "Empty";     //����"Empty"Ҳ��һ���ֲ���ʱ��
//}

int factorial(int val)
{
    if (val > 1)
        return val * factorial(val - 1);
    else
        return 1;
}

int main()
{
    cout << factorial(4) << endl;
}
