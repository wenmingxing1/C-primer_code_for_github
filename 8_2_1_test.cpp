ifstream in(ifile);     //构造一个ifstream并打开给定文件
ofstream out;       //输出文件流未关联到任何文件

ifstream input(argv[1]);        //打开销售记录文件
ofstream output(argv[2]);       //打开输出文件
Sales_data total;       //保存销售总额的变量
if(read(input, total))      //读取第一条销售记录
{
    Sales_data trans;       //保存下一条销售记录的变量
    while(read(input, trans))       //读取剩余记录
    {
        if (total.isbn() == trans.isbn())   //检查isbn
            total.combine(trans);       //更新销售总额
        else
        {
            print(output, total) << endl;       //打印结果
            total = trans;      //处理下一本书
        }
    }
    print(output, total) << endl;       //打印最后一本书的销售额
}
else            //文件中无输入数据
    cerr << "No data?!" << endl;


ifstream in(ifile);     //构建一个ifstream并打开指定文件
ofstream out;       //输出文件流未与任何文件相关联
out.open(ifile + ".copy");      //打开指定文件

in.close();     //关闭文件
in.open(ifile + "2");       //打开另一个文件
