/**
 * 
 * 
 * 
 * 友元函数
 * 
 * 
 */ 
#include<iostream>
using namespace std;


class A{
    //声明友元函数
    friend void print(A a);
private:
    int a;
public:
    A(){
        a = 100;
    }
};

void print(A a){
    //声明为友元后，即可访问
    cout<<"友元函数："<<a.a<<endl;
}

int main(){
    
    A a;
    print(a);

    return 0;
}