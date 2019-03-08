#include<iostream>

using namespace std;

/***
 * 
 * 
 * 
 * 
 * 函数重载 
 * 
 * 
 * 
 * 
 */


class A{

public:
    void print(int a){
        cout<<a<<endl;
    }

    void print(char a){
        cout<<a<<endl;
    }

    void print(float a){
        cout<<a<<endl;
    }
};

int main(){

    A a;

    a.print('a');
    a.print(10);
    a.print(10.2f);

    return 0;
}