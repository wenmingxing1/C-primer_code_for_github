//在函数被调用时ptr被创建并初始化
void process(shared_ptr<int> ptr)
{
    //使用ptr
}//ptr离开作用域，被销毁

shared_ptr<int> p(new int(42)); //引用计数为1
process(p); //拷贝p会递增它的引用计数；在process中引用计数器值为2
int i = *p; //正确，引用计数器为1

int *x(new int(42));    //危险，x是一个普通指针，不是一个智能指针
process(x); //错误，不能将int*转换为一个shared_ptr<int>
process(shared_ptr<int>(x)); //合法的，但内存会被释放
int j = *x; //未定义的，x是一个悬空指针
