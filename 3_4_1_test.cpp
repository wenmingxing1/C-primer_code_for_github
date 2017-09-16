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
        //*it = toupper(*it);     //通过解引用改变字符形式
    }
    cout << s << endl;

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)     //将第一个单词大写
    {
        *it = toupper(*it);
    }
    cout << s << endl;

    vector<int>::iterator it;   //it能读写vector<int>的元素
    string::iterator it2;   //it2能读写string对象中的字符
    vector<int>::const_iterator it3;    //it3只能读元素，不能写元素
    string::const_iterator it4;     //it4只能读字符，不能写字符

    (*it).empty()   //解引用it，然后调用结果对象的empty成员
    *it.empty()     //错误：试图访问it的名为empty的成员，但it是个迭代器，没有empty成员

    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
        cout << *it << endl;

