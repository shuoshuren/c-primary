#include<iostream>

using namespace std;

/**
 * 
 *  输入输出
 * 
 * 
 */ 

int main(){

    printf("%s%d%c\n","hello",100,'A');

    cout<<"hello"<<100<<'A'<<endl;

    int a;
    char b;
    scanf("%d",&a);
    scanf("%c",&b);
    printf("%d%c\n",a,b);


    cin>>a>>b;

    cout<<a<<b<<endl;

    return 0;
}