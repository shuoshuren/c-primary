/**
 * 
 *  static_cast
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

class B:public A{
public:
    B(){
        b = 200;
    }
    int b;
};


int main(){

    // 和c强制转换一样
    float a = 1.234f;
    int b = static_cast<int>(a);
    cout<<b<<endl;

    void *p = &a;
    float *p1 = static_cast<float*>(p);
    cout<<*p1<<endl;

    //子类转换为基类
    B bb;
    A* pA = static_cast<A*>(&bb);
    cout<<pA->a<<endl;

    //基类转换为子类
    A aa;
    B* pB = static_cast<B*>(&aa);
    cout<<pB->a<<endl;
    cout<<pB->b<<endl;


    return 0;

}