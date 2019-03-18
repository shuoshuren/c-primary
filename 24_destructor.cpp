/**
 * 
 * 
 * 析构函数
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;


class A
{
private:
    int a;
public:
    A(){
        cout<<"自定义的默认构造函数"<<endl;
    }
    ~A(){
        cout<<"自定义的析构函数"<<endl;
    }
};

int main(){
    //创建的时候构造，销毁的时候自动调用析构函数
    A a;

    A *p = new A();
    //调用析构函数
    delete p;

    return 0;
}