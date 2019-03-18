#include<iostream>

using namespace std;

int main(){
    //单字节字符
    char a='A';

    //宽字节字符
    wchar_t b=L'B';
    wchar_t c=L'中';

    cout<<a << " "<< sizeof(a) <<endl;
    
    //宽字符输出使用wout
    wcout<<b << " "<< sizeof(b) <<endl;
    
    //默认locale是EN_US,中文编码
    wcout.imbue(locale("CHS"));
    wcout<<c << " "<< sizeof(c) <<endl;


    return 0;
}
