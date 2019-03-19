/**
 * 
 * 
 * 
 *  多继承
 * 
 * 
 * 
 */ 
#include<iostream>
using namespace std;

/**
 * 
 * 
 * 多继承方式一
 * 
 * 
 * 
class A{
public:
    int a;
public:
    A(){
        a = 100;
    }
    
};

class B:public A{

public:
    int b;
public:
    B(){
        b = 200;
    }

};


class C:public B{

};

*/

//多继承方式二
class A{
public:
    int a;
public:
    A(){
        a = 100;
    }
    
};

class B{

public:
    int b;
public:
    B(){
        b = 200;
    }

};


class C:public B,public A{

};

int main(){
    C c;
    cout<<c.a<<endl;
    cout<<c.b<<endl;

    

    return 0;
}