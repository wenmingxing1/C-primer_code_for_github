istream_iterator<int> int_it(cin);  //��cin��ȡint
istream_iterator<int> int_eof;  //β�������
ifstream in("afile");   //ifstream���ļ����������洢�豸ֵ�ڴ���
istream_iterator<string> str_it(in);    //�ӡ�afile����ȡ�ַ���


istream_iterator<int> in_iter(cin); //��cin��ȡint
istream_iterator<int> eof;  //istreamβ�������
while (in_iter != eof)  //�������ݿɹ���ȡʱ
    //���õ��������ȡ�������ص������ľ�ֵ
    //�����õ���������ô�����ȡ��ǰһ��ֵ
    vec.push_back(*in_iter++);


istream_iterator<int> in_iter(cin), eof;    //
vector<int> vec(in_iter, eof);  //�ӵ�������Χ����vec


ostream_iterator<int> out_iter(cout, " ");
for (auto e : vec)
    *out_iter++ = e;    //��ֵ���ʵ���Ͻ�Ԫ��д��cout
cout << endl;


istream_iterator<Sales_item> item_iter(cin), eof;
ostream_iterator<Sales_item> out_iter(cout, "\n");
//����һ�ʽ��׼�¼����sum�У�����ȡ��һ����¼
Sales_item sum = *item_iter++;
while (item_iter != eof)
{
    //�����ǰ���׼�¼������item_iter�У�������ͬ��ISBN��
    if (item_iter -> isbn() == sum.isbn())
        sum += *item_iter++;    //����ӵ�sum�ϲ���ȡ��һ����¼
    else
    {
        out_iter = sum; //���sum�ĵ�ǰֵ
        sum = *item_iter++; //��ȡ��һ����¼
    }
}
out_iter = sum; //�ǵô�ӡ���һ���¼�ĺ�
