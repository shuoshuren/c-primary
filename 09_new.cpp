#include<iostream>

using namespace std;

/**
 * 
 * 
 * new 运算符
 * 
 * 
 * 
 */ 

int main(){

    //分配堆内存，4个字节
    int *pA = new int;

    *pA = 123;
    cout<<*pA<<endl;

    //分配内存时，初始化
    int *pB = new int(100);
    cout<<*pB<<endl;

    //分配数组，并初始化
    int *pc = new int[3]{66,77,88};

    for(int i = 0; i < 3; i++)
    {
        cout<<pc[i]<<endl;
    }

    //释放普通内存
    delete pA;
    delete pB;
    //释放数组堆内存
    delete []pc;
    
    return 0;
}