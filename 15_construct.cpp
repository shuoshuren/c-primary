/**
 * 
 * 
 *  构造函数
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
    //自定义构造函数,系统不在提供
    A(/* args */){
        a = 10;
        cout<<"自定义构造函数"<< a<<endl;
    }

    A(int a){
        this->a = a;
        cout<<"自定义带参数构造函数"<< a<<endl;
    }
   
};


int main(){

    A a;//自动调用默认的构造函数
    A b(22);
    return 0;
}


