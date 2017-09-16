list<string> a = {"Milton", "Shakespeare", "Austen"};
auto it1 = a.begin();   //list<string>::iterator
auto it2 = a.rbegin();  //list<string>::reverse_iterator
auto it3 = a.cbegin();  //list<string>::const_iterator
auto it4 = a.crbegin(); //list<string>::const_reverse_iterator


//ÿ������������Ԫ�أ��ø����ĳ�ʼ�������г�ʼ��
list<string> authors = {"Milton", "Shakespeare", "Austen"};
vector<const char*> articles = {"a", "an", "the"};

list<string> list2(authors);       //��ȷ������ƥ��
deque<string> authList(authors);    //�����������Ͳ�ƥ��
vector<string> words(articles);     //�����������ͱ���ƥ��

//��ȷ�����Խ�const char*Ԫ��ת��Ϊstring
forward_list<string> words(articles.begin(), articles.end());

//����Ԫ�أ�ֱ��������������itָ���Ԫ��
deque<string> authList(authors.begin(), it);

vector<int> ivec(10, -1);       //10��intԪ�أ�ÿ������ʼ��Ϊ-1
list<string> svec(10, "hi!");
forward_list<int> ivec(10);     //10��Ԫ�أ�ÿ������ʼ��Ϊ0
deque<string> svec(10);     //10��Ԫ�أ�ÿ������ʼ��Ϊ��string

array<int, 42>;
array<string, 10>;

array<int, 10>::size_type i;
array<int>::size_type j;    //����array<int>����һ������

int digs[10] = {0,1,2,3,4,5,6,7,8,9};
int cpy[10] = digs;     //�����������鲻֧�ֿ�����ֵ

array<int, 10> digits = {0,1,2,3,4,5,6,7,8,9};
array<int, 10> copy = digits;       //��ȷ��ֻҪ��������ƥ�伴�Ϸ�


list<string> names;
vector<const char*> oldstyle;
names = oldstyle;   //�����������Ͳ�ƥ��

names.assign(oldstyle.cbegin(), oldstyle.cend());   //��ȷ�����Խ�const char*ת��Ϊstring

//�ȼ���slist1.clear();
//���slist1.insert(slist1.begin(), 10, "Hiya!");
list<string> slist1(1);     //1��Ԫ�أ�Ϊ��string
slist1.assign(10, "Hiya!");     //10��Ԫ�أ�ÿ������"Hiya!"

vector<string> svec1(10);       //10��Ԫ�ص�vector
vector<string> svec2(24);       //24��Ԫ�ص�vector
swap(svec1, svec2);

slist.insert(iter, "Hello!");       //��Hello��ӵ�iter֮ǰ��λ��

vector<string> svec;
list<string> slist;
slist.insert(slist.begin(), "Hello!");  //�ȼ���slist.push_front("Hello!")

//vector��֧��push_front�������ǿ���ʹ��insert
svec.insert(svec.begin(), "Hello!");    //���棬���뵽vectorĩβ֮����κ�λ�ö����ܺ���

svec.insert(svec.end(), 10, "Anna");

vector<string> v = {"quasi", "simba", "frollo", "scar"};
//��v���������Ԫ����ӵ�slist�Ŀ�ʼλ��
slist.insert(slist.begin(), v.end()-2, v.end());
slist.insert(slist.end(),{"these", "word", "will", "go", "at", "the", "end"});

//����ʱ���󣬵�������ʾҪ�����ķ�Χ������ָ����Ŀ��λ����ͬ������
slist.insert(slist.begin(), slist.begin(), slist.end());

list<string> lst;
auto iter = lst.begin();
while(cin >> word)
    iter = lst.insert(iter, word);      //�ȼ��ڵ���push_front


//��c��ĩβ����һ��Sales_data����
//ʹ������������Sales_data���캯��
c.emplace_back("978-0590353403", 25, 15.99);

//����û�н�������������push_back�汾
c.push_back("978-0590353403", 25, 15.99);
//��ȷ������һ����ʱ��Sales_data���󴫵ݸ�push_back
c.push_back(Sales_data("978-0590353403", 25, 15.99));



