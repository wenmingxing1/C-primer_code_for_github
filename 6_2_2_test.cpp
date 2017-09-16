#include<iostream>
#include<string>
using namespace std;

//int reset(int i)
//{
//    return i = 0;
//}
//
//int main()
//{
//    int j = 1;
//    cout << reset(j) << endl;
//}

//bool isShorter(const string &s1, const string &s2)
//{
//    return s1.size() < s2.size();
//}
//int main()
//{
//    string s1 = "abc";
//    string s2 = "abcd";
//
//    if(isShorter(s1,s2))
//        cout << "yes" << endl;
//    else
//        cout << "No" << endl;
//}

int find_char(const string &s, char c, int &occurs)
{
    auto ret = s.size();    //第一次出现的位置
    occurs = 0;         //设置表示出现次数的形参的值
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;        //记录c第一次出现的位置
            ++occurs;        //出现次数加1
        }
    }
    return ret;         //出现次数通过occurs隐式的返回
}

int main()
{
    string s= "abaacdaca";
    int ctr;
    auto index = find_char(s,'a',ctr);  //因为occurs是引用形式，所以能改变ctr的值
    cout << index << " " << ctr << endl;
}
