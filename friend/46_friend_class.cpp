/**
 * 
 * 
 * 
 * 
 * 友元类
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

class A
{
    //声明友元类
    friend class B;
private:
    int a;
public:
    A(){
        a = 100;
    }
    
};

class B{
public:
    //成为A友元函数
    void print(A a){
        cout<< a.a<<endl;
    }

    //成为A的友元函数，改变a的值
    void setValue(A &a,int a2){
        a.a = a2;
    }
};


int main(){
    A a;
    B b;
    b.print(a);
    b.setValue(a,200);
    b.print(a);

    return 0;
}
