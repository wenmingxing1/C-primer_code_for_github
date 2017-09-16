#include<iostream>
#include<memory>
#include<vector>
#include<string>

using namespace std;

//Query_base��
//����һ��������࣬����Ĳ�ѯ���ʹ������������г�Ա����private��
class Query_base
{
    friend class Query;
protected:
    using line_no = TextQuery::line_no; //����eval����
    virtual ~Query_base() = default;
private:
    //eval�����뵱ǰQueryƥ���QueryResult
    virtual QueryResult eval(const TextQuery&) const = 0;
    //rep�Ǳ�ʾ��ѯ��һ��string
    virtual string rep() const = 0;
};

//Query��
//����һ������Query_base�̳���ϵ�Ľӿں���
class Query
{
    //��Щ�������Ҫ���ʽ���shared_ptr�Ĺ��캯�������ú�����˽�е�
    friend Query operator~(const Query &);
    friend Query operator|(const Query &, const Query &);
    friend Query operator&(const Query &, const Query &);
public:
    Query(const string &);  //����һ���µ�WordQuery
    //�ӿں��������ö�Ӧ��Query_base����
    QueryResult eval(const TextQuery &t) const {return q->eval(t);}
    string rep() const {return q->rep();}
private:
    Query(shared_ptr<Query_base> query): q(query) {}
    shared_ptr<Query_base> q;
};

//Query����������
ostream & operator<<(ostream &os, const Query &query)
{
    //Query::repͨ������Query_baseָ���rep()�����������
    return os << query.rep();
}

//WordQuery��
class WordQuery: public Query_base
{
    friend class Query; //Queryʹ��WordQuery���캯��
    WordQuery(const string &s): query_word(s) {}
    //������࣬WordQuery���������м̳ж����Ĵ��麯��
    QueryResult eval(const TextQuery &t) const {return t.query(query_word);}
    string rep() const {return query_word;}
    string query_word;  //Ҫ���ҵĵ���
};
//������WordQuery��֮�����Ǿ��ܶ������string��Query���캯����
inline Query::Query(const string &s): q(new WordQuery(s)) {}

//NotQuery��
class NotQuery: public Query_base
{
    friend Query operator~(const Query &);
    NotQuery(const Query &q): query(q) {}
    //������࣬NotQuery���������м̳ж����Ĵ��麯��
    string rep() const {return "~(" + query.rep() + ")";}
    QueryResult eval(const TextQuery&) const;
    Query query;
};
//~�����
inline Query operator~(const Query &operand)
{
    return shared_ptr<Query_base>(new NotQuery(operand));
}

//BinaryQuery��
class BinaryQuery: public Query_base
{
protected:
    BinaryQuery(const Query &l, const Query &r, string s): lhs(l), rhs(r), opSym(s) {}
    //�����ࣺBinaryQuery������eval
    string rep() const {return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")"; }
    Query lhs, rhs; //�����Ҳ��������
    string opSym;   //�����������
};

//AndQuery�༰&�����
class AndQuery: public BinaryQuery
{
    friend Query operator&(const Query&, const Query&);
    AndQuery(const Query &left, const Query &right): BinaryQuery(left, right, "&") {}
    //
    QueryResult eval(const TextQuery&) const;
};
inline Query operator&(const Query &lhs, const Query &rhs)
{
    return shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

//OrQuery�༰|�����
class OrQuery: public BinaryQuery
{
    friend Query operator|(const Query&, const Query&);
    OrQuery(const Query &left, const Query &right): BinaryQuery(left, right, "|") {}
    QueryResult eval(const TextQuery&) const;
};
inline Query operator|(const Query &lhs, const Query &rhs)
{
    return shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

//OrQuery::eval

//AndQuery::eval

//NotQuery::eval






















