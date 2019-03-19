/**
 * 
 * 
 * 
 * const_cast
 * 
 * 
 */ 
#include<iostream>
using namespace std;


class A{
public:
    A(){
        a = 100;
    }

    int a;

};


int main(){


    const int a = 100;
    const int *pA = &a;//指向常量的指针
    cout<<*pA<<endl;
    //*pA = 200; //因为指向的内容是常量，所以无法更改

    int *pA2 = const_cast<int *>(pA);
    *pA2 = 200;

   
    cout<<*pA2<<endl;


    //定义常对象
    const A b;
    //b.a = 20;//无法更改常对象的值
    A &b2 = const_cast<A&>(b);
    b2.a = 600;
    cout<<b.a <<endl;


    return 0;
}

    