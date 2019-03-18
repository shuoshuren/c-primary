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
    bool sex;//性别
    int arg;//年龄
protected:
    int score;//分数
public:
    int grade;//年级

    //学习，在类的内部定义实现，属于内联函数
    void learn(){

        cout<<"上课"<<endl;
    }

    void doExercise();
    //做家庭作业
    void doHomework();
};


/**
 * 做锻炼
 */ 
void Student::doExercise(){
    cout<<"做锻炼"<<endl;
}
/**
 * //做家庭作业
 */   
void Student::doHomework(){
    cout<<"做家庭作业"<<endl;
}


int main(){

    //定义学生的变量，对象
    Student stu;
    stu.grade = 6;
    //用“.”访问类的共有成员变量和函数
    cout<<stu.grade<<endl;

    stu.doHomework();
    stu.doExercise();

    return 0;
}
