/**
 * 
 * 
 * explicit 关键字
 * 
 */ 

# include<iostream>
using namespace std;

class A
{
private:
    int a;
public:
    //explicit 禁止构造函数隐式转换
    explicit A(int a){
        this->a = a;
    }

    void printThis(){
        cout<<a<<endl;
    }
};


int main(){
    //标准写法，调用有参构造函数
    A a1(13);
    a1.printThis();

    //编译器自动隐式将整数转换为A对象，因为构造函数参数为int
    //添加explicit后，编译报错。
    A a2 = 12;
    a2.printThis();

    

    return 0;
}
