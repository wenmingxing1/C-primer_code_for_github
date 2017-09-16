/*����һ��string������ת��Ϊ��һ��string��
���������ʱ�����ļ���
��һ���ļ��������һЩ��������ת���ڶ����ļ��е��ı���
���ĺ����ǣ�ÿ����һ�����ʳ�����������ʱ�����Ǿͽ����滻Ϊ��Ӧ�Ķ��*/
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

/*
���ǵĳ���ʹ����������������word_transform�����������̡�����������ifstream������
��һ������Ӧ�󶨵�����ת���ļ�
�ڶ�������Ӧ�󶨵�����Ҫת�����ı��ļ���
����buildMap���ȡת�������ļ���������һ��map�����ڱ���ÿ�����ʵ���ת�����ݵ�ӳ�䡣
����transform����һ��string���������ת�����򣬷���ת��������ݡ�
*/


/*�������ȵ���buildMap�����ɵ���ת��map������������ trans_map�С�
������ʣ�ಿ�ִ��������ļ���whileѭ����getlineһ��һ�еض�ȡ�����ļ���
��������Ŀ����ʹ������еĻ���λ���ܺ������ļ���һ����
Ϊ�˴�ÿ�л�ȡ���ʣ�ʹ����һ��Ƕ��whileѭ��������һ��istringstream������ǰ���е�ÿ������
����������У��ڲ�whileѭ��ʹ��һ��bool����firstword��ȷ���Ƿ��ӡһ���ո�
��ͨ������tranform�����Ҫ��ӡ�ĵ��ʡ�treaform�ķ���ֵ������word��ԭ����string��������trans_map��ָ���Ķ�Ӧת�����ݡ�
*/
void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);    //����ת������
    string text;    //���������е�ÿһ��
    while(getline(input, text)) //��ȡһ������
    {
        istringstream stream(text); //��ȡÿ������
        string word;
        bool firstword = true;  //�����Ƿ��ӡ�ո�
        while(stream >> word)
        {
            if(firstword)
                firstword = false;
            else
                cout << " ";    //�ڵ��ʼ��ӡһ���ո�
            //transform�������ĵ�һ����������ת��֮�����ʽ
            cout << transform(word, trans_map); //��ӡ���
        }
        cout << endl;   //���һ�е�ת��
    }
}

//����ת��ӳ��
/*����buildMap��ȡ�����ļ���������ת��ӳ��
map_file�е�ÿһ�ж�Ӧһ������ÿ��������һ�����ʺ�һ��������ɣ�������ܰ���������ʡ�
������>>��ȡҪת���ĵ��ʣ�����key�У�������getline��ȡ��һ���е�ʣ�����ݴ���value��
����getline��������ǰ���ո���Ҫ�������������ʺ�����ת������֮��Ŀո�
�ڱ���ת������֮ǰ������Ƿ�����һ�����ϵ��ַ���
����ǣ�����substr�������ָ�ʼ�ת������֮���ǰ���ո񣬲����õ������ַ�������trans_map�С�
ע�⣬����ʹ���±����������ӹؼ���-ֵ�ԡ�
���������ĺ�����һ��������ת���ļ��г��ֶ�ε�������������е��ʳ��ֶ�Σ�ѭ���Ὣ���һ����Ӧ�������trans_map��
��whileѭ��������trans_map�н�����������ת�������ı��Ĺ���
*/
map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;  //����ת������
    string key; //Ҫת���ĵ���
    string value;   //�滻�������
    //��ȡ��һ�����ʴ���key�У�����ʣ�����ݴ���value
    while(map_file >> key && getline(map_file, value))
        if(value.size() > 1)    //����Ƿ���ת������
            trans_map[key] = value.substr(1);   //����ǰ���ո�
        else
            throw runtime_error("no rule for " + key);
    return trans_map;
}

//����ת���ı�
/*����transform����ʵ�ʵ�ת�����������������Ҫת����string�����ú�ת������map��
�������string��map�У�transform������Ӧ�Ķ������transformֱ�ӷ���ԭstring

�������ȵ���find��ȷ������string�Ƿ���map�С�
������ڣ���find����һ��ָ���ӦԪ�صĵ�����������find����β���������
���Ԫ�ش��ڣ����ǽ����õ����������һ������ؼ��ֺ�ֵ��pair��Ȼ�󷵻س�Աsecond�����������s�����ݡ�
*/
const string & transform(const string &s, const map<string, string> &m)
{
    //ʵ�ʵ�ת���������˲����ǳ���ĺ���
    auto map_it = m.find(s);
    //���������ת������map��
    if(map_it != m.cend())
        return map_it->second;  //ʹ���滻����
    else
        return s;   //����ԭstring
}

int main()
{

}
