/**
 * 
 * 
 * 继承和派生
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

//父类
class A
{
public:
    int a;
public:
    A(){
        a = 10;
    }

    void print(){
        cout<<"A::print "<<a<<endl;
    }
};

//子类
class B:public A{

};


int main(){
    B b;
    cout<<b.a<<endl;
    b.print();
    return 0;
}