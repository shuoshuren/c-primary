/**
 * 
 * 
 * 
 * 虚函数
 * 
 * 
 */ 
#include<iostream>
using namespace std;

class A
{

public:
    //虚函数
    virtual void print(){
        cout<<"A::print"<<endl;
    }
};

class B:public A{
public:
    //重写虚函数
    void print(){
        cout<<"B::print"<<endl;
    }
};


int main(){

    A *pA = new A;

    pA->print();


    pA = new B;
    pA->print();




    return 0;
}