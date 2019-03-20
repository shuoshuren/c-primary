/**
 * 
 * 
 * 
 * 类成员函数作为友元函数
 * 
 * 
 * 
 * 
 */ 
#include<iostream>
using namespace std;

class A;//类的前置声明

class B{

public:
    void print(A a);
};


class A{
    
private:
    int a;
public:
    A(){
        a = 100;
    }

    friend void B::print(A a);
};

//只有把类成员函数的实现放到A定义的后面，才能够识别A
void B::print(A a){
        cout<<"友元类成员函数访问private成员:"<<a.a<<endl;
}




int main(){
    A a;
    B b;
    b.print(a);

    return 0;
}

