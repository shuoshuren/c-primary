/**
 * 
 * 
 * 
 * 取地址运算符重载函数
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
    
    void print(){
        cout<<a<<endl;
    }
};




int main(){

    A a(111);
    //实际调用系统默认提供的& 运算符重载函数
    cout<< &a <<endl;

    return 0;
}