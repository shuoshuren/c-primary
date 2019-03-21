/**
 * 
 * 函数模板
 * 
 * 
 */ 

#include<iostream>
using namespace std;

//定义sum 函数模板
template<typename T>
T sum(T a,T b){
    return a+b;
}

int main(){
    //模板函数
    cout<<sum<int>(1,2)<<endl;

    cout<<sum<float>(1.234f,2.568f)<<endl;

    cout<<sum<double>(1.75,2.268)<<endl;
    return 0;
}