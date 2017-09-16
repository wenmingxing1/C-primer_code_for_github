ofstream out1, out2;
out1 = out2;        //错误，不能对流对象赋值
ofstream print(ofstream);       //错误，不能初始化ofstream参数
out2 = print(out2);     //错误，不能拷贝流对象

while (cin >> word)
    //ok:读操作成功
