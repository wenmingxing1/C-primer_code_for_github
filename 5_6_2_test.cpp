#include<iostream>

using namespace std;

int main()
{
    try
    {
        program-statements
    }
    catch (exception-declaration)
    {
        handler-statements
    }
    catch (exception-declaration)
    {
        handler-statements
    }

    while (cin >> item1 >> item2)
    {
        try
        {
            //执行添加两个Sales_item对象的代码
            //如果添加失败，代码通过throw抛出一个runtime_error的异常
            if (item1.isbn() != item2.isbn())
                throw runtime_error("Data must refer to same ISBN");
            cout << item1 + item2 << endl;
        }
        catch(runtime_error err)
        {
            //提醒用户两个ISBN必须一致，询问是否重新输入
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
                break;  //跳出while循环
        }
    }
}
