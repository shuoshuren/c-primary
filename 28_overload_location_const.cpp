/**
 * 
 * 
 * 
 * const修饰的取地址运算符重载函数
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
    A(int a){
        this->a = a;
        cout<<"调用自定义构造函数"<<endl;
    }

    //自定义&运算符重载函数
    A* operator &(){
        cout<<"自定义&运算符重载函数"<<endl;
        return this;
    }

    //带const自定义&运算符重载函数
    //1.前一个const,返回指向常对象的指针
    //2.后一个const,表示是一个常成员函数，常对象只能调用常成员函数
    const A* operator &() const {
        cout<<"带const自定义&运算符重载函数"<<endl;
        return this;
    }
    
    void print(){
        cout<<a<<endl;
    }
};




int main(){

    A a(111);
    //实际调用系统默认提供的& 运算符重载函数
    cout<< &a <<endl;

    //常对象
    const A a2(222);
    cout<< &a2<<endl;

    return 0;
}