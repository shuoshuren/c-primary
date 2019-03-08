#include<iostream>

using namespace std;

/**
 * 
 * 
 *  类对象指针
 * 
 * 
 * 
 * 
 */ 

class Student{

public:
    int age;

    void listen(){

        cout<<"listen"<<endl;
    }
};

int main(){
    //定义类的对象
    Student stu;
    //对象用“.”,访问公有变量和函数
    stu.age = 18;

    //定义类指针
    Student *pStu = &stu;

    //类指针用“->”访问
    cout << pStu->age <<endl;
    pStu->listen();

    return 0;
}