/**
 * 
 * 
 * 
 * 纯虚函数和抽象类
 * 
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

//只要有一个纯虚函数，就成为抽象类
class Animal{
    
public:
    //纯虚函数
    virtual void eat() = 0;

    virtual void sleep() = 0;

    virtual void run() = 0;

    
};

class Tiger:public Animal{
public:
    virtual void eat(){
        cout<<"吃肉"<<endl;
    }

    virtual void sleep(){
        cout<<"趴着睡"<<endl;
    }

    virtual void run(){
        cout<<"飞奔"<<endl;
    }

};

class Panda:public Animal{
public:
    virtual void eat(){
        cout<<"吃竹子"<<endl;
    }

    virtual void sleep(){
        cout<<"躺着睡"<<endl;
    }

    virtual void run(){
        cout<<"慢腾腾的走"<<endl;
    }

};

void show(Animal & p){
    p.run();
    p.eat();
    p.sleep();
}


int main(){

    Tiger t;
    show(t);

    Panda p;
    show(p);

    return 0;
}