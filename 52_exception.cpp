/**
 * 
 * 
 * 
 * 异常处理
 * 
 * 
 */ 
#include<iostream>
using namespace std;

int main(){
    try{
        cout<<"开头代码"<<endl;
        // int a = 10;
        // int b = 0;
        // int c = a / b;
        throw "A";
        throw 1;

        cout<<"结尾代码"<<endl;
    }catch(const char * ex){
        cout<<"异常"<<ex<<endl;
    }catch(int e){
        cout<<"异常"<<e<<endl;
    }
    
    catch(...){
        cout<<"捕获异常"<<endl;
    }
    

    return 0;
}