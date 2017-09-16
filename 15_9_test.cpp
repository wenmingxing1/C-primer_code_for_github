#include<iostream>
#include<memory>
#include<vector>
#include<string>

using namespace std;

//Query_base类
//这是一个抽象基类，具体的查询类型从中派生，所有成员都是private的
class Query_base
{
    friend class Query;
protected:
    using line_no = TextQuery::line_no; //用于eval函数
    virtual ~Query_base() = default;
private:
    //eval返回与当前Query匹配的QueryResult
    virtual QueryResult eval(const TextQuery&) const = 0;
    //rep是表示查询的一个string
    virtual string rep() const = 0;
};

//Query类
//这是一个管理Query_base继承体系的接口函数
class Query
{
    //这些运算符需要访问接受shared_ptr的构造函数，而该函数是私有的
    friend Query operator~(const Query &);
    friend Query operator|(const Query &, const Query &);
    friend Query operator&(const Query &, const Query &);
public:
    Query(const string &);  //构建一个新的WordQuery
    //接口函数：调用对应的Query_base操作
    QueryResult eval(const TextQuery &t) const {return q->eval(t);}
    string rep() const {return q->rep();}
private:
    Query(shared_ptr<Query_base> query): q(query) {}
    shared_ptr<Query_base> q;
};

//Query的输出运算符
ostream & operator<<(ostream &os, const Query &query)
{
    //Query::rep通过它的Query_base指针对rep()进行了虚调用
    return os << query.rep();
}

//WordQuery类
class WordQuery: public Query_base
{
    friend class Query; //Query使用WordQuery构造函数
    WordQuery(const string &s): query_word(s) {}
    //具体的类，WordQuery将定义所有继承而来的纯虚函数
    QueryResult eval(const TextQuery &t) const {return t.query(query_word);}
    string rep() const {return query_word;}
    string query_word;  //要查找的单词
};
//定义了WordQuery类之后，我们就能定义接受string的Query构造函数了
inline Query::Query(const string &s): q(new WordQuery(s)) {}

//NotQuery类
class NotQuery: public Query_base
{
    friend Query operator~(const Query &);
    NotQuery(const Query &q): query(q) {}
    //具体的类，NotQuery将定义所有继承而来的纯虚函数
    string rep() const {return "~(" + query.rep() + ")";}
    QueryResult eval(const TextQuery&) const;
    Query query;
};
//~运算符
inline Query operator~(const Query &operand)
{
    return shared_ptr<Query_base>(new NotQuery(operand));
}

//BinaryQuery类
class BinaryQuery: public Query_base
{
protected:
    BinaryQuery(const Query &l, const Query &r, string s): lhs(l), rhs(r), opSym(s) {}
    //抽象类：BinaryQuery不定义eval
    string rep() const {return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")"; }
    Query lhs, rhs; //左侧和右侧运算对象
    string opSym;   //运算符的名字
};

//AndQuery类及&运算符
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

//OrQuery类及|运算符
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






















