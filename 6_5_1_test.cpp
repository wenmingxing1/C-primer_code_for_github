#include<iostream>

using namespace std;

typedef string::size_type sz;
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');

window = screen(,,'?');     //错误，只能省略尾部的实参
window = screen('?');       //调用的结果是screen('?',80,' ')

void f2()
{
    def = '*';
    sz wd = 100;    //隐藏了外层定义的wd，但没有改变默认值
    window = screen();      //调用screen(ht(),80,'*')
}
int main()
{

}
