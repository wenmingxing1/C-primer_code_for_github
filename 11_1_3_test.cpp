//�ں���������ʱptr����������ʼ��
void process(shared_ptr<int> ptr)
{
    //ʹ��ptr
}//ptr�뿪�����򣬱�����

shared_ptr<int> p(new int(42)); //���ü���Ϊ1
process(p); //����p������������ü�������process�����ü�����ֵΪ2
int i = *p; //��ȷ�����ü�����Ϊ1

int *x(new int(42));    //Σ�գ�x��һ����ָͨ�룬����һ������ָ��
process(x); //���󣬲��ܽ�int*ת��Ϊһ��shared_ptr<int>
process(shared_ptr<int>(x)); //�Ϸ��ģ����ڴ�ᱻ�ͷ�
int j = *x; //δ����ģ�x��һ������ָ��
