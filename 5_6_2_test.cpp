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
            //ִ���������Sales_item����Ĵ���
            //������ʧ�ܣ�����ͨ��throw�׳�һ��runtime_error���쳣
            if (item1.isbn() != item2.isbn())
                throw runtime_error("Data must refer to same ISBN");
            cout << item1 + item2 << endl;
        }
        catch(runtime_error err)
        {
            //�����û�����ISBN����һ�£�ѯ���Ƿ���������
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
                break;  //����whileѭ��
        }
    }
}
