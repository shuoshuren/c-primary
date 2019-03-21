/**
 * 
 * 
 * 写文件
 * 
 * 
 */ 
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;


int main(){
    /**
    //ofstream写文件
    ofstream out;
    out.open("1.txt",ios::app);
    out<<"hello ";
    out.write("world",strlen("world"));
    out.close();

    //ifstream读文件
    ifstream in;
    in.open("1.txt",ios::in);
    char buf[100] = {0};
    in.read(buf,100);
    cout<<buf<<endl;
    cout<<in.gcount()<<endl;
    in.close();
    */

    //fstream 输入输出流
    fstream f;
    f.open("2.txt",ios::out|ios::in|ios::trunc);
    //写文件
    f<<"hello";
    f<<100;
    f<<1.234;
    //此刻，文件在末尾 ，需要将文件指针移动到文件开头
    f.seekg(0,ios::beg);

    //读文件
    char buf[100] = {0};
    int a;
    double b;
    f>>buf;
    f>>a;
    f>>b;
    cout<<buf<<endl;
    cout<<a<<endl;
    cout<<b<<endl;


   f.close();




    return 0;
}

