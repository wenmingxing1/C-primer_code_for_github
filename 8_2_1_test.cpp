ifstream in(ifile);     //����һ��ifstream���򿪸����ļ�
ofstream out;       //����ļ���δ�������κ��ļ�

ifstream input(argv[1]);        //�����ۼ�¼�ļ�
ofstream output(argv[2]);       //������ļ�
Sales_data total;       //���������ܶ�ı���
if(read(input, total))      //��ȡ��һ�����ۼ�¼
{
    Sales_data trans;       //������һ�����ۼ�¼�ı���
    while(read(input, trans))       //��ȡʣ���¼
    {
        if (total.isbn() == trans.isbn())   //���isbn
            total.combine(trans);       //���������ܶ�
        else
        {
            print(output, total) << endl;       //��ӡ���
            total = trans;      //������һ����
        }
    }
    print(output, total) << endl;       //��ӡ���һ��������۶�
}
else            //�ļ�������������
    cerr << "No data?!" << endl;


ifstream in(ifile);     //����һ��ifstream����ָ���ļ�
ofstream out;       //����ļ���δ���κ��ļ������
out.open(ifile + ".copy");      //��ָ���ļ�

in.close();     //�ر��ļ�
in.open(ifile + "2");       //����һ���ļ�
