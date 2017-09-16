/*给定一个string，将它转化为另一个string。
程序的输入时两个文件。
第一个文件保存的是一些规则，用来转换第二个文件中的文本。
表达的含义是，每当第一个单词出现在输入中时，我们就将它替换为对应的短语。*/
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

/*
我们的程序将使用三个函数。函数word_transform管理整个过程。它接受两个ifstream参数：
第一个参数应绑定到单词转换文件
第二个参数应绑定到我们要转换的文本文件。
函数buildMap会读取转换规则文件，并创建一个map，用于保存每个单词到其转换内容的映射。
函数transform接受一个string，如果存在转换规则，返回转换后的内容。
*/


/*函数首先调用buildMap来生成单词转换map，将它保存在 trans_map中。
函数的剩余部分处理输入文件。while循环用getline一行一行地读取输入文件。
这样做的目的是使得输出中的换行位置能和输入文件中一样。
为了从每行获取单词，使用了一个嵌套while循环，他用一个istringstream来处理当前行中的每个单词
在输出过程中，内层while循环使用一个bool变量firstword来确定是否打印一个空格。
他通过调用tranform来获得要打印的单词。treaform的返回值火者是word中原来的string，火者是trans_map中指出的对应转换内容。
*/
void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);    //保存转换规则
    string text;    //保存输入中的每一行
    while(getline(input, text)) //读取一行输入
    {
        istringstream stream(text); //读取每个单词
        string word;
        bool firstword = true;  //控制是否打印空格
        while(stream >> word)
        {
            if(firstword)
                firstword = false;
            else
                cout << " ";    //在单词间打印一个空格
            //transform返回它的第一个参数或其转换之后的形式
            cout << transform(word, trans_map); //打印输出
        }
        cout << endl;   //完成一行的转换
    }
}

//建立转换映射
/*函数buildMap读取给定文件，建立起转换映射
map_file中的每一行对应一条规则。每条规则由一个单词和一个短语组成，短语可能包含多个单词。
我们用>>读取要转换的单词，存入key中，并调用getline读取这一行中的剩余内容存入value。
由于getline不会跳过前导空格，需要我们来跳过单词和它的转换内容之间的空格。
在保存转换规则之前，检查是否获得了一个以上的字符。
如果是，调用substr来跳过分割单词及转换短语之间的前导空格，并将得到的子字符串存入trans_map中。
注意，我们使用下标运算符来添加关键字-值对。
我们隐含的忽略了一个单词在转换文件中出现多次的情况。如果真的有单词出现多次，循环会将最后一个对应短语存入trans_map。
当while循环结束后，trans_map中将保存着用来转换输入文本的规则。
*/
map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;  //保存转换规则
    string key; //要转换的单词
    string value;   //替换后的内容
    //读取第一个单词存入key中，行中剩余内容存入value
    while(map_file >> key && getline(map_file, value))
        if(value.size() > 1)    //检查是否有转换规则
            trans_map[key] = value.substr(1);   //跳过前导空格
        else
            throw runtime_error("no rule for " + key);
    return trans_map;
}

//生成转换文本
/*函数transform进行实际的转换工作。其参数是需要转换的string的引用和转换规则map。
如果给定string在map中，transform返回相应的短语。否则，transform直接返回原string

函数首先调用find来确定给定string是否在map中。
如果存在，则find返回一个指向对应元素的迭代器。否则，find返回尾后迭代器。
如果元素存在，我们解引用迭代器，获得一个保存关键字和值得pair，然后返回成员second，即用来替代s的内容。
*/
const string & transform(const string &s, const map<string, string> &m)
{
    //实际的转换工作；此部分是程序的核心
    auto map_it = m.find(s);
    //如果单词在转换规则map中
    if(map_it != m.cend())
        return map_it->second;  //使用替换短语
    else
        return s;   //返回原string
}

int main()
{

}
