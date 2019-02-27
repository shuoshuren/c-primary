#include<iostream>

using namespace std;


//自动推导类型：auto

int main(){
    
    auto b1 = true;
    auto b2 = 99;
    auto b3 = 'A';
    auto b4 = "Hello";

    cout<<typeid(b1).name()<<endl;

    cout<<typeid(b2).name()<<endl;
    cout<<typeid(b3).name()<<endl;
    cout<<typeid(b4).name()<<endl;

    return 0;
}
