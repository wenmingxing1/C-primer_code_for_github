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
    cout << noshowbase;     //�ظ���״̬

    cout << "..........................." << endl;

    //cout.precision()���ص�ǰ����
    cout << "Precision: " << cout.precision() << ", value: " << sqrt(2.0) << endl;

    //cout.precision��12������ӡ��������Ϊ12λ
    cout.precision(12);
    cout << "Precision: " << cout.precision() << ", value: " << sqrt(2.0) << endl;

    //��һ�����þ��ȵķ�ʽʹʹ��setprecision���ݷ�
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
    //���׵�һ�У�ʹ���������С12��λ��
    cout << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl;
    //���׵�һ�У������������
    cout << left
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl << right;
    //���׵�һ�У��Ҷ���������
    cout << right
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl << left;
    //���׵�һ�У�����������ڲ�
    cout << internal
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl;
    //���׵�һ�У���#��Ϊ�����ַ�
    cout << setfill('#')
        << "i: " << setw(12) << i << "next col" << endl << "d: " << setw(12) << d << "next col" << endl << setfill(' ');//�ظ������Ĳ����ַ�


    cout << "................................" << endl;

//    char ch;
//    while (cin >> ch)
//        cout << ch;
//
//    cin >> noskipws;    //����cin��ȡ�հ׷�
//    while (cin >> ch)
//        cout << ch;
//    cin >> skipws;  //��cin�ָ���Ĭ��״̬

    char ch;
    while (cin.get(ch))
        cout.put(ch);










    return 0;



















}
