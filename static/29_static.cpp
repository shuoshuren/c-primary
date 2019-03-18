#include<iostream>
using namespace std;


//限定全局变量只能在本文件中使用
static int a = 1000;

//限定函数只能在本文件中使用
static void fun(){
    cout<<"func"<<endl;
}
