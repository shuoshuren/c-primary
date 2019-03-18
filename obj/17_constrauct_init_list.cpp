/**
 * 
 * 
 * 
 *  初始化列表
 * 
 * 
 */ 

#include<iostream>
using namespace std;

class A
{
private:
    const int a;
    int b;
public:
    A(int a,int b):a(a),b(b){
        
    };
    void print(){
        cout<<a<<","<<b<<endl;
    }
};

int main(){

    A a(11,22);
    a.print();

    return 0;
}
