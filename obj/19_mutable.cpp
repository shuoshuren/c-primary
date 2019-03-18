/**
 * 
 * 
 * 
 *  mutable 关键字
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
    //可变的，
    mutable int a;
    int b;
public:
    A(int a,int b):a(a),b(b){

    }

    void print() const{
        //加上了mutable,使得在常成员函数中成为例外
        a = 200;
        // b = 10;
        cout<< a<<","<<b<< endl;
    }
};

int main(){

    A a(20,50);
    a.print();

    return 0;
}