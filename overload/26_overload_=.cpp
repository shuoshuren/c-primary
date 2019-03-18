/**
 * 
 * 
 * 赋值运算符重载函数
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
        cout<<"调用自定义构造函数"<<endl;
    }
    //拷贝构造函数
    A(const A& a){
       this->a = a.a;
       cout<<"拷贝构造函数"<<endl; 
    }

    //自定义=赋值运算符重载函数
    A& operator=(const A & a){
        if(this == &a){//自己赋值自己
            return *this;
        }
        this->a = a.a;
        cout<<"自定义=赋值运算符重载函数"<<endl;
        return *this;
    }

    void print(){
        cout<< a<< endl;
    }
    
};


int main(){

    A a(111);//调用构造函数
    A b(a);//调用拷贝构造函数

    A c = a;//调用拷贝构造函数

    A e(222);//调用构造函数
    //调用了默认的=运算符重载函数进行赋值
    a = e;//没有调用拷贝构造，a早就构造好了

    a.print();

    a = a;//自己赋值给自己

    return 0;
}