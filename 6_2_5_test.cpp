#include<iostream>

using namespace std;

int main(int argc, char *argv[])

int main(int argc, char ** argv)

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

void foo(parm_list, ...);
void foo(...);
