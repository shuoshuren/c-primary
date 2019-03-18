/**
 * 
 *  对象数组
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
    A(){

    }

    A(int a){
        this->a = a;
        cout<<"有参构造函数"<<endl;
    }
    void print(){
        cout<<a<<endl;
    }

    void setValue(int a){
        this->a = a;
    }
};

int main(){

    // 1.定义对象数组,并初始化
    A arr[3] = {A(111),A(222),A(333)};
    // 2.先定义,需要默认的构造函数
    A arr2[3];
    arr2[0].setValue(444);
    arr2[1].setValue(555);
    arr2[2].setValue(666);

    //遍历数组
    for(int i = 0; i < 3; i++){
        arr2[i].print();
    }
    


    return 0;
}
