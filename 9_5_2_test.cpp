//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    s.insert(s.size(), 5, '!');     //��sĩβ����5����̾��
//
//    cout << s << endl;
//
//    s.erase(s.size()-5, 5);     //��sɾ�����5���ַ�
//
//    cout << s << endl;
//
//
//
//    const char *cp = "Stately, plump Buck";
//    s.assign(cp, 7);    //s == "Stately"
//
//    cout << s << endl;
//
//    s.insert(s.size(), cp+7);   //s == "Stately, plump Buck"
//
//    cout << s << endl;
//
//}

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "Hello zuijin nihao zhoujielun";
    //s.append("abc");

    s.erase(11,3);
    s.insert(11, "niu");
    cout << s << endl;
}
