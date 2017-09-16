#include<iostream>
using namespace std;

struct Sales_data
    {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
    };

int main()
{
    Sales_data data1,data2;
    double price = 0;
    cout << "Please input the first bookNo & units_sold & price : " << endl;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    cout << "Please input the second bookNo & units_sold & price : " << endl;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if(data1.bookNo == data2.bookNo)
    {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        cout << endl << data1.bookNo << " " << totalCnt << " " << totalRevenue << endl;

        if(totalCnt != 0)
            cout << "The average price is : " << totalRevenue/totalCnt << endl;
        else
            cout << "No sales!" << endl;

        return 0;
    }
    else
    {
        cerr << "Data must refer to the same ISDN!" << endl;
        return -1;
    }
}

