/**
 * 
 * 
 *  拷贝构造函数
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
        cout<<"构造函数"<<a<<endl;
    }

    //拷贝构造函数
    A(const A & a){
        this->a = a.a;
        cout<<"拷贝构造"<<this->a<<endl;
    }
    
};


int main(){

    A a(11);//调用构造函数

    A b(a);//调用拷贝构造函数

    A c = a;//调用拷贝构造函数

    return 0;
}