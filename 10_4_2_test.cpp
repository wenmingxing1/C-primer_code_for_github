istream_iterator<int> int_it(cin);  //从cin读取int
istream_iterator<int> int_eof;  //尾后迭代器
ifstream in("afile");   //ifstream，文件读操作，存储设备值内存中
istream_iterator<string> str_it(in);    //从“afile”读取字符串


istream_iterator<int> in_iter(cin); //从cin读取int
istream_iterator<int> eof;  //istream尾后迭代器
while (in_iter != eof)  //当有数据可供读取时
    //后置递增运算读取流，返回迭代器的旧值
    //解引用迭代器，获得从流读取的前一个值
    vec.push_back(*in_iter++);


istream_iterator<int> in_iter(cin), eof;    //
vector<int> vec(in_iter, eof);  //从迭代器范围构造vec


ostream_iterator<int> out_iter(cout, " ");
for (auto e : vec)
    *out_iter++ = e;    //赋值语句实际上将元素写到cout
cout << endl;


istream_iterator<Sales_item> item_iter(cin), eof;
ostream_iterator<Sales_item> out_iter(cout, "\n");
//将第一笔交易记录存在sum中，并读取下一条记录
Sales_item sum = *item_iter++;
while (item_iter != eof)
{
    //如果当前交易记录（存在item_iter中）有着相同的ISBN好
    if (item_iter -> isbn() == sum.isbn())
        sum += *item_iter++;    //将其加到sum上并读取下一条记录
    else
    {
        out_iter = sum; //输出sum的当前值
        sum = *item_iter++; //读取下一条记录
    }
}
out_iter = sum; //记得打印最后一组记录的和
