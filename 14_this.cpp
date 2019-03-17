/***
 * 
 * 
 *  this指针 
 * 
 * 
 * 
 */
#include<iostream>

using namespace std;

class A
{

public:
    void printThis(){
        //this指针只能在类的内部使用
        cout<<""<<this<<endl;
        cout<< typeid(this).name() <<"  "<<this<<endl;
    }
};

int main(){

    A a;//定义对象a
    A * pA = &a;

    cout<<pA<<endl;
    pA->printThis();

    return 0;
}
