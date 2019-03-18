/**
 * 
 * 
 * 
 *  static
 * 
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;
#include "29_static.cpp"

void fun();

void fun2(){
    //静态存储区的变量，只初始化一次，生命周期为整个程序期间
    static int n = 0;
    cout<< ++n<<endl;
}

int main(){

    extern int a;//只是声明
    cout<< a <<endl;

    fun();

    fun2();
    fun2();
    fun2();

    return 0;
}