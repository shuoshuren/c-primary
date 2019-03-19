/**
 * 
 *  dynamic_cast
 * 
 */ 
#include<iostream>
using namespace std;

class A{
public:
    A(){
        a = 100;
    }

    virtual ~A(){

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

    

    //子类转换为基类,与static_cast一样
    B *pB = new B;
    A* pA = dynamic_cast<A*>(pB);
    cout<<pA->a<<endl;

    //基类转换为子类
    A *pA2 = new B;
    B *pB2 = dynamic_cast<B*>(pA2);//必须要有虚函数
    cout<<pB2->b<<endl;

    return 0;

}