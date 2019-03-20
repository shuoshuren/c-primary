/**
 * 
 * 私有继承
 * 
 */ 

#include<iostream>
using namespace std;

class A{ 
private:
    int a1;

protected:
    int a2;
public:
    int a3;
    A(){

    }
};

//保护继承 private
class B:private A{

public:
    B(){
        //在类的内部,父类的私有成员不能访问，其他可以访问。
        //a1 = 100；
        a2 = 20;
        a3 = 30;
    }
};

int main(){
    B b;
    // cout<<b.a3<<endl;
}