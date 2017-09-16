#include<iostream>
#include<vector>

using namespace std;

vector<Quote> basket;
basket.push_back(Quote("0-201-82470-1", 50));
//��ȷ������ֻ�ܰѶ����Quote���ֿ�����basket
basket.push_back(Bulk_quote("0-201-82470-1", 50, 10, .25));
//����Quote����İ汾��
cout << basket.back().net_pricce(15) << endl;

vector<shared_ptr<Quote>> basket;
basket.push_back(make_shared<Quote>("0-201-82470-1", 50));
basket.push_back(make_shared<Bulk_quote>("0-201-82470-1", 50, 10, .25));
//����Quote����İ汾
cout << basket.back()->net_price(15) << endl;
