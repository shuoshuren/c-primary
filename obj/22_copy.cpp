/**
 * 
 * 
 * 浅拷贝和深拷贝
 * 
 * 
 */ 

#include<iostream>
#include<cstring>
using namespace std;

class A
{
private:
    
public:
    //构造函数
    A(const char * str){
        int len = strlen(str) + 1;
        p = new char[len];
        memcpy(p,str,len);
    }
    //自定义拷贝构造函数--深拷贝
    A(const A & a){
        int len = strlen(a.p) + 1;
        this->p = new char[len];
        memcpy(this->p,a.p,len);
    }

    void print(){
        cout<<p<<endl;
    }

    //指针变量
    char * p;
  
};



int main(){

    A a("hello world");
    a.print();

    //调用默认的拷贝构造函数，仅仅值拷贝
    //调用自己的拷贝构造函数，深拷贝
    A b(a);
    b.print();

    strcpy(a.p,"world");
    a.print();

    //此刻b中p的值也改变了
    b.print();


    return 0;
}