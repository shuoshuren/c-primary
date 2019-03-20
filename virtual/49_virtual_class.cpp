/**
 * 
 * 
 * 虚基类
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

class A{
public:
    int a;
};

//虚拟继承
class B:virtual public A{
public:
    B(){
        a = 200;
    }
};

//虚拟继承
class C:virtual public A{
public:
    C(){
          a = 300;
    }

};

class D:public B,public C{

};


int main(){

    D d;
    //B,C中都有a成员变量，D继承B,C时，访问a时产生了歧义性
    // cout<<d.a<<endl;

    //解决方法一，明确调用
    cout<<d.B::a<<endl;
    cout<<d.C::a<<endl;

    //方法二,虚基类
    cout<<d.a<<endl;

    return 0;
}