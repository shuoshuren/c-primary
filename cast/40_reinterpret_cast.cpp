/**
 * 
 * 
 * 
 * reinterpret_cast
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

class A{
public:
    int a;
    A(){
        a = 100;
    }
};

class B:public A{
public:
    int b;
    B(){
        b = 200;
    }
};




int main(){

    B f;
    // f.a = 10;
    // f.b = 20;
    unsigned char *pf = (unsigned char *)(&f);//模拟网络接受的数据

    //相当与结构体还原
    A *pA = reinterpret_cast<A*>(pf);
    B *pB = reinterpret_cast<B*>(pf);
    
    cout<<*pf<<endl;
    cout<<pA->a<<endl;
    cout<<pB->a<<","<<pB->b<<endl;

}