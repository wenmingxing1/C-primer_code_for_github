#include<iostream>
#include<vector>
#include<string>

using namespace std;

class message
{
    friend class Folder;
public:
    //folders����ʽ��ʼ��Ϊ�ռ���
    explicit Message(const string &str = "") : contents(str) {}
    //�������Ƴ�Ա����������ָ��Message��ָ��
    Message(const Message&);    //�������캯��
    Message& operator=(const Message&); //������ֵ�����
    ~Message(); //��������
    //�Ӹ���Folder��������ӻ�ɾ����Message
    void save(Folder&);
    void remove(Folder&);
private:
    string contents;    //ʵ����Ϣ�ı�
    set<Folder*> folders;   //����Message��Folder
    //�������캯����������ֵ�����������������ʹ�õĹ��ߺ���
    //����Message��ӵ�ָ�������Folder��
    void add_to_Folders(const Message&);
    //��folders�е�ÿ��Folder��ɾ��Message
    void remove_from_Folders();
};

void Message::save(Folder &f)
{
    folder.insert(&f);  //������Folder��ӵ����ǵ�Folder�б���
    f.addMsg(this); //����Message��ӵ�f��Message������
}

void Message::remove(Folder &f)
{
    folders.erase(&f);  //������Folder�����ǵ�Folder�б���ɾ��
    f.remMsg(this); //����Message��f��Message������ɾ��
}

void Message::add_to_Folders(const Message &m)
{
    for (auto f : m.folders)    //��ÿ������m��Folder
        f->addMsg(this);    //���Folder���һ��ָ��Message��ָ��
}

Message::Message(const Message &) : contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);  //������Ϣ��ӵ�ָ��m��Folder��
}

//�Ӷ�ӦFolder��ɾ����Message
void Message::remove_from_Folders()
{
    for (auto f : folders)  //��folders��ÿ��ָ��
        f->remMsg(this);    //�Ӹ�Folder��ɾ����Message
}

Message::~Message()
{
    remove_from_Folders();
}

Message& Message operator=(const Message &rhs)
{
    //ͨ����ɾ��ָ���ٲ��������������ַ�ֵ���
    remove_from_Folders();  //��������Folder
    contents = rhs.contents;    //��rhs������Ϣ����
    folders = rhs.folders;  //��rhs����Folderָ��
    add_to_Folders(rhs);    //����Message��ӵ���ЩFolder��
    return *this;
}

void swap(Message &lhs, Message &rhs)
{
    using std::swap;    //�ڱ������ϸ���˵����Ҫ��������һ����ϰ��
    //��ÿ����Ϣ��ָ�����ԭ�����ڵ�Folder��ɾ��
    for(auto f : lhs.folders)
        f->remMsg(&lhs);
    for(auto f : rhs.folders)
        f->remMsg(&rhs);
    //����contents��Folderָ��set
    swap(lhs.folders, rhs.folders); //ʹ��swap(set&, set&)
    swap(lhs.contents,rhs.contents);    //swap��string&, string&��
    //��ÿ��Message��ָ����ӵ�������Folder��
    for(auto f : lhs.folders)
        f->addMsg(&lhs);
    for(auto f : rhs.folders)
        f->addMsg(&rhs);
}



















