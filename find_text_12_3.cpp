#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<memory>

using namespace std;

//ʹ��TextQuery��Ĳ��Գ���
void runQueries(ifstream &infile)
{
    //infile��һ��ifstream��ָ������Ҫ������ļ�
    TextQuery tq(infile);   //�����ļ���������ѯmap
    //���û���������ʾ�û�����Ҫ���ҵĵ��ʣ���ɲ�ѯ����ӡ���
    while(true)
    {
        cout << "enter word to look for , or q to quit: ";
        string s;
        //�������ļ�β���û������ˡ�q��ʱ��ֹѭ��
        if(!(cin >> s) || s == "q") break;
        //ָ���ѯ����ӡ���
        print(cout, tq.query(s)) << endl;
    }
}


//��TextQuery
class QueryResult;  //Ϊ�˶���query�ķ������ͣ���������Ǳ����
class TextQuery
{
public:
    using line_no = vector<string>::size_type;
    TextQuery(ifstream&);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> file;    //�����ļ�
    //ÿ�����ʵ������ڵ��кŵļ��ϵ�ӳ��
    map<string, shared_ptr<set<line_no>>> wm;
};

//TextQuery���캯��
//��ȡ�����ļ����������ʵ��кŵ�ӳ��
TextQuery::TextQuery(ifstream &is): file(new vector<string>)
{
    string text;
    while(getline(is, text))
    {
        //���ļ��е�ÿһ��
        file->push_back(text);  //��������ı�
        int n = file->size() - 1;   //��ǰ�к�
        istringstream line(text);   //�����ı��ֽ�Ϊ����
        string word;
        while(line >> word)
        {
            //������ʲ���wm�У���֮Ϊ�±���wm�����һ��
            auto &lines = wm[word]; //lines��һ��shared_ptr
            if(!lines)  //�����ǵ�һ�������������ʱ����ָ��Ϊ��
                lines.reset(new set<line_no>);  //����һ���µ�set
            lines->insert(n);   //�����кŲ���set��
        }
    }
}


//��QueryResult
class QueryResult
{
    friend ostream& print(ostream&, const QueryResult&);
public:
    QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f): sought(s), lines(p), file(f) {}
private:
    string sought;  //��ѯ����
    shared_ptr<set<line_no>> lines; //���ֵ��к�
    shared_ptr<vector<string>> file;    //�����ļ�
};

//����query
QueryResult TextQuery::query(const string &sought) const
{
    //����ҵ���sought�����ǽ�����һ��ָ���set��ָ��
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    //ʹ��find�������±�����������ҵ��ʣ����⽫������ӵ�wm��
    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought, nodata, file);   //δ�ҵ�
    else
        return QueryResult(sought, loc->second, file);
}

//��ӡ���
ostream &print(ostream & os, const QueryResult &qr)
{
    //����ҵ��˵��ʣ���ӡ���ִ��������г��ֵĶ�λ��
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << make_plural(qr.lines->size(), "time", "s") << endl;
    //��ӡ���ʳ��ֵ�ÿһ��
    for(auto num : *qr.lines) //��set�е�ÿ������
        //�����кŴ�0��ʼ���û���������
        os << "\t(line " << num + 1 << ")" << *(qr.file->begin() + num) << endl;
    return os;
}
