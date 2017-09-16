list<string> a = {"Milton", "Shakespeare", "Austen"};
auto it1 = a.begin();   //list<string>::iterator
auto it2 = a.rbegin();  //list<string>::reverse_iterator
auto it3 = a.cbegin();  //list<string>::const_iterator
auto it4 = a.crbegin(); //list<string>::const_reverse_iterator


//每个容器有三个元素，用给定的初始化器进行初始化
list<string> authors = {"Milton", "Shakespeare", "Austen"};
vector<const char*> articles = {"a", "an", "the"};

list<string> list2(authors);       //正确，类型匹配
deque<string> authList(authors);    //错误，容器类型不匹配
vector<string> words(articles);     //错误，容器类型必须匹配

//正确，可以将const char*元素转化为string
forward_list<string> words(articles.begin(), articles.end());

//拷贝元素，直到（但不包括）it指向的元素
deque<string> authList(authors.begin(), it);

vector<int> ivec(10, -1);       //10个int元素，每个都初始化为-1
list<string> svec(10, "hi!");
forward_list<int> ivec(10);     //10个元素，每个都初始化为0
deque<string> svec(10);     //10个元素，每个都初始化为空string

array<int, 42>;
array<string, 10>;

array<int, 10>::size_type i;
array<int>::size_type j;    //错误，array<int>不是一个类型

int digs[10] = {0,1,2,3,4,5,6,7,8,9};
int cpy[10] = digs;     //错误，内置数组不支持拷贝或赋值

array<int, 10> digits = {0,1,2,3,4,5,6,7,8,9};
array<int, 10> copy = digits;       //正确，只要数组类型匹配即合法


list<string> names;
vector<const char*> oldstyle;
names = oldstyle;   //错误，容器类型不匹配

names.assign(oldstyle.cbegin(), oldstyle.cend());   //正确，可以将const char*转化为string

//等价于slist1.clear();
//后跟slist1.insert(slist1.begin(), 10, "Hiya!");
list<string> slist1(1);     //1个元素，为空string
slist1.assign(10, "Hiya!");     //10个元素，每个都是"Hiya!"

vector<string> svec1(10);       //10个元素的vector
vector<string> svec2(24);       //24个元素的vector
swap(svec1, svec2);

slist.insert(iter, "Hello!");       //将Hello添加到iter之前的位置

vector<string> svec;
list<string> slist;
slist.insert(slist.begin(), "Hello!");  //等价于slist.push_front("Hello!")

//vector不支持push_front，但我们可以使用insert
svec.insert(svec.begin(), "Hello!");    //警告，插入到vector末尾之外的任何位置都可能很慢

svec.insert(svec.end(), 10, "Anna");

vector<string> v = {"quasi", "simba", "frollo", "scar"};
//将v的最后两个元素添加到slist的开始位置
slist.insert(slist.begin(), v.end()-2, v.end());
slist.insert(slist.end(),{"these", "word", "will", "go", "at", "the", "end"});

//运行时错误，迭代器表示要拷贝的范围，不能指向与目的位置相同的容器
slist.insert(slist.begin(), slist.begin(), slist.end());

list<string> lst;
auto iter = lst.begin();
while(cin >> word)
    iter = lst.insert(iter, word);      //等价于调用push_front


//在c的末尾构造一个Sales_data对象
//使用三个参数的Sales_data构造函数
c.emplace_back("978-0590353403", 25, 15.99);

//错误，没有接受三个参数的push_back版本
c.push_back("978-0590353403", 25, 15.99);
//正确，创建一个临时的Sales_data对象传递给push_back
c.push_back(Sales_data("978-0590353403", 25, 15.99));



