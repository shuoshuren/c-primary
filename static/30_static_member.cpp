/**
 * 
 * 
 * 
 * 静态成员
 * 
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

class A
{
public:
    int a;
    static int count;//统计有多少个对象
public:
    A(){
        //每产生一个对象，引用计数+1
        ++count;
    }

    void print(){
        cout<<"total:"<<count<<" 对象"<<endl;
    }

    //静态成员函数
    static void print2(){
        // 静态成员函数无法访问非静态成员变量
        // cout<<a<<endl;
        cout<<count<<endl;
    }
   
};
//静态成员变量只能在类外初始化，并且加上类限定符
int A::count = 0;


int main(){
    A a;
    a.print();

    A b;
    a.print();
    b.print();

    //两种访问公有静态成员变量
    cout<<A::count<<endl;
    cout<<a.count<<endl;

    //两种访问公有静态成员函数
    A::print2();
    a.print2();

}