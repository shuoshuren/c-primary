/**
 * 
 * 
 * 模板类
 * 
 * 
 * 
 */ 
#include<iostream>
using namespace std;

//定义类模板
template<typename T>
class Math{

public:
    //在类的内部声明
    T sum(T a,T b);

    //在类内部定义实现
    T max(T a,T b){
        return a>b ? a: b;
    }
};

//类的外部实现成员函数
template<typename T>
T Math<T>::sum(T a,T b){
    return a+b;
}



int main(){
    Math<float> math;
    
    cout<<math.sum(14.59f,10.25f)<<endl;
    cout<<math.max(10.45f,15.45f)<<endl;
    return 0;
}