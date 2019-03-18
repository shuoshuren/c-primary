#include<iostream>

/*
 * 输出变量类型
 */ 

using namespace std;

struct A {};

int main(){

    cout<< typeid(A).name() <<endl;

    cout<< typeid(int).name() <<endl;

    cout<< typeid(12.3*12.5).name() <<endl;

    cout<< typeid("hello").name() <<endl;

    return 0;
}
