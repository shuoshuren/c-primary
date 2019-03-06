#include<iostream>

using namespace std;

/***
 * 
 * 命名空间 
 */

namespace A{
    int a = 10;
    int b = 20;

    namespace B{
        int b = 30;
    }
}

namespace C{
    int a = 50;
}

namespace
{
    int d = 100;
} //


int main(){

    cout<<A::a<<endl;
    cout<<C::a<<endl;

    cout<<A::b<<endl;
    cout<<A::B::b<<endl;

    // 别名
    namespace AB = A::B;

    cout<<AB::b<<endl;

    cout<<d<<endl;

    return 0;
}