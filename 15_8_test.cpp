#include<iostream>
#include<vector>

using namespace std;

vector<Quote> basket;
basket.push_back(Quote("0-201-82470-1", 50));
//正确，但是只能把对象的Quote部分拷贝给basket
basket.push_back(Bulk_quote("0-201-82470-1", 50, 10, .25));
//调用Quote定义的版本，
cout << basket.back().net_pricce(15) << endl;

vector<shared_ptr<Quote>> basket;
basket.push_back(make_shared<Quote>("0-201-82470-1", 50));
basket.push_back(make_shared<Bulk_quote>("0-201-82470-1", 50, 10, .25));
//调用Quote定义的版本
cout << basket.back()->net_price(15) << endl;
