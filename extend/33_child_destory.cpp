/**
 * 
 * 
 * 派生类析构函数
 * 
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

class A
{
private:
    int a;
    
public:
    A(int a){
        this->a = a;
        cout<<"A 构造函数"<<endl;
    }

    ~A(){
        cout<<"A 析构函数"<<endl;
    }

    void print(){
       cout<<a<<endl;
   }
    
};

class B:public A
{
private:
    int b;
    
public:
    //构造父类需要在初始化构造列表中实现
   B(int a,int b):A(a){
       this->b = b;
       cout<<"B 构造函数"<<endl;
   }

   ~B(){
       cout<<"B 析构函数"<<endl;
   }

   void print(){
       //明确指出调用A的print
       A::print();
       cout<<b<<endl;
   }
};

int main(){

    //先构造父类，再构造子类
    //析构和构造的顺序刚好相反
    B b(10,20);
    b.print();
    
    return 0;
}
