/**
 * 
 * 
 * 常对象 
 * 
 * 
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
    A(int a):a(a){

    }

    void print1(){
        a = 200;
        cout<<a<<endl;
    }

    void print2() const{
        
        cout << a<<endl;
    }
};


int main(){

    //常对象只能调用常成员函数
    const A a(10);
    a.print2();
    // a.print1();


    return 0;
}