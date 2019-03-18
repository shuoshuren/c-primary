/***
 * 
 * 
 *  const 成员变量和函数
 * 
 * 
 * 
 */ 

#include<iostream>
using namespace std;

class A
{
private:
    const int a;//常成员变量
    int b;
public:
    A(int a,int b):a(a){
        //这种写法不能用于const成员变量，只能用初始化列表
        // this->a = a;
        this->b = b;
    }

    //希望无法改变任何成员变量的值，则声明为const.
     void print() const{
        // b = 200;
        cout<<a<<","<<b <<endl;
    }

};

int main(){

    A a(111,20);
    a.print();
    return 0;
}
