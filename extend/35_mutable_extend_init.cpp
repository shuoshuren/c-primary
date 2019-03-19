/**
 * 
 * 
 * 
 *  多重继承的构造函数
 * 
 * 
 * 
 */ 
#include<iostream>
using namespace std;

class A
{
public:
    int a;
public:
    A(int a){
        this->a = a;
        cout<<"A 构造函数"<<endl;
    }
};


class B
{
public:
    int b;
public:
    B(int b){
        this->b = b;
        cout<<"B 构造函数"<<endl;
    }
};


class C:public B,public A{
public:
    int c;
public:
    C(int a,int b,int c):A(a),B(b){
        this->c = c;
        cout<<"c 构造函数"<<endl;
    }


};

int main(){
    C c(10,20,30);
    cout<<c.a<<endl;
    cout<<c.b<<endl;
    cout<<c.c<<endl;
    return 0;
}