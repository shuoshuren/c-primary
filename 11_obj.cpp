#include<iostream>

using namespace std;

/**
 * 
 * 
 * 
 * 类与对象 
 * 
 * 
 * 
 */


class Student
{
private:
    int num;//学号
    char name[100];//姓名
    int arg;//年龄
protected:
    int score;//分数
public:
    int grade;//年级

    //学习的行为
    void learn(){
    }

    //考试
    void exam(){

    }
}


int main(){

    //定义学生的变量，对象
    Student stu;


    return 0;
}
