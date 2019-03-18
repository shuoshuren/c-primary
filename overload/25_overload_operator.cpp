/**
 * 
 * 
 *  运算符重载
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
        cout<<"调用自定义构造函数"<<endl;
    }
    //运算符重载
    A operator +(const A &b){
        return A(this->a + b.a);
    }

    void print(){
        cout<<a<<endl;
    }
   
};

int main(){

    A a(100);
    A b(200);


    A c = a + b;

    c.print();
    
    return 0;
}
