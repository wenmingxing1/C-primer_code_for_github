#include<iostream>

using namespace std;

int main()
{
    string s("some string");
    //cout << *s.begin() << endl;
    if (s.begin() != s.end())
    {
        *s.begin() = toupper(*s.begin());
        //auto it = s.begin();
        //*it = toupper(*it);     //ͨ�������øı��ַ���ʽ
    }
    cout << s << endl;

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)     //����һ�����ʴ�д
    {
        *it = toupper(*it);
    }
    cout << s << endl;

    vector<int>::iterator it;   //it�ܶ�дvector<int>��Ԫ��
    string::iterator it2;   //it2�ܶ�дstring�����е��ַ�
    vector<int>::const_iterator it3;    //it3ֻ�ܶ�Ԫ�أ�����дԪ��
    string::const_iterator it4;     //it4ֻ�ܶ��ַ�������д�ַ�

    (*it).empty()   //������it��Ȼ����ý�������empty��Ա
    *it.empty()     //������ͼ����it����Ϊempty�ĳ�Ա����it�Ǹ���������û��empty��Ա

    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
        cout << *it << endl;

