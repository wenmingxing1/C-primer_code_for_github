#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    cout << "default bool values: " << true << " " << false
        << "\nalpha bool values: " << boolalpha << true << " " << false << endl;

    cout << boolalpha << true << noboolalpha << false << endl;

    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "octal: " << oct << 20 << " " << 1024 << endl;
    cout << "hex: " << hex << 20 << " " << 1024 << endl;
    cout << "decimal: " << dec << 20 << " " << 1024 << endl;

    cout << "......................" << endl;

    cout << showbase;
    cout << "default: " << 20 << endl;
    cout << "octal: " << oct << 20 << endl;
    cout << "hex: " << hex << 20 << endl;
    cout << "decimal: " << dec << 20 << endl;
    cout << noshowbase;     //回复流状态

    cout << "..........................." << endl;

    //cout.precision()返回当前精度
    cout << "Precision: " << cout.precision() << ", value: " << sqrt(2.0) << endl;

    //cout.precision（12）将打印精度设置为12位
    cout.precision(12);
    cout << "Precision: " << cout.precision() << ", value: " << sqrt(2.0) << endl;

    //另一种设置精度的方式使使用setprecision操纵符
    cout << setprecision(3);
    cout << "Precision: " << cout.precision() << ", value: " << sqrt(2.0) << endl;

    cout << "...................................." << endl;

//    cout << "default format: " << 100 * sqrt(2.0) << endl;
//    cout << "scientific: " << scientific << 100 * sqrt(2.0) << endl;
//    cout << "fixed decimal: " << fixed << 100 * sqrt(2.0) << endl;
//    cout << "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << endl;
//    cout << "use default: " << defaultfloat << 100 * sqrt(2.0) << endl;


    cout << "....................................." << endl;

    cout << 10.0 << endl;
    cout << showpoint << 10.0 << endl;
    cout << 11.0 << endl;
    cout << noshowpoint << 11.0 << endl;

    cout << "......................................." << endl;

    int i = -16;
    double d = 3.14159;
    //补白第一列，使用输出中最小12个位置
    cout << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl;
    //补白第一列，左对齐所有列
    cout << left
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl << right;
    //补白第一列，右对齐所有列
    cout << right
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl << left;
    //补白第一列，但补在域的内部
    cout << internal
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl;
    //补白第一列，用#作为补白字符
    cout << setfill('#')
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl << setfill(' ');//回复正常的补白字符


    cout << "................................" << endl;

//    char ch;
//    while (cin >> ch)
//        cout << ch;
//
//    cin >> noskipws;    //设置cin读取空白符
//    while (cin >> ch)
//        cout << ch;
//    cin >> skipws;  //将cin恢复到默认状态

    char ch;
    while (cin.get(ch))
        cout.put(ch);










    return 0;



















}
