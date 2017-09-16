#include<iostream>
#include<string>

using namespace std;

//char &get_val(string &str,string::size_type ix)
//{
//    return str[ix];     //get_val假定索引值是有效的
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
//    //expected 和 actual 是string对象
//    if(expected.empty())
//        return {};      //返回一个空的vector对象
//    else if (excepted == actual)
//        return {"functionX", "Okay"};       //返回列表初始化的vector对象
//    else
//        return {"functionX", expected, actual};
//}

//const string &mainp()
//{
//    string ret;
//    if(!ret.empty())
//        return ret;     //错误，返回局部变量的引用！
//    else
//        return "Empty";     //错误，"Empty"也是一个局部临时量
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
