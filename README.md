c++入门

typeid()操作符：获取一个表达式的类型，返回结果是const type_info&类型
使用方法：typeid(类型或变量或表达式).name() 返回类型名字字符串

c++新增类型：
wchar_t:用在国际化程序的实现中，unicode编码的宽字符一般以wchar_t类型存储
bool：1个字节，用于条件判断，false为假，true为真
longlong：long占4个字节，longlong占8个字节
auto：c++11引入的auto类型，能让编译器自动分析表达式的类型

__asm：用于调用内联汇编程序，后面可以跟一个程序指令，一组括在大括号中指令或者一堆空大括号

&:引用，相当于起了一个别名
引用规则：1.引用被创建的同时必须被初始化
2.无NULL引用，引用必须与合法的存储单元关联
3.一旦引用被初始化，就不能改变引用的关系

c++头文件
C++头文件不带.h,当c++需要包含c的头文件的时候，前面加c字符串，去掉.h
.h头文件中，只能放变量或者函数的声明，不能放定义
例外：
1.头文件可以定义const对象，全局的const对象默认是没有extern的声明，只在当前文件占有效，static对象定义也可以放进头文件
2.头文件中可以定义内联函数（inline),inline函数是需要编译器在遇到它的地方根据定义内联展开，不会链接
3.头文件中可以定义类（class),此外，把函数成员的实现写入类的定义，此刻成员函数被编译器视为内联，如果成员函数的定义写在类定义的头文件中，没有写入类定义中，这是非法的，此刻成员函数就不是内联的

namespace:名字空间就是解决名称冲突的问题
命名空间的别名：namespace 别名=命名空间名
using namespace 命名空间名：所指定的命名空间的所有成员都直接可用，无需要加前缀修饰。
匿名命名空间：不仅可以避免名称冲突，还可以使代码保持局部性，保护代码不被他人非法使用
匿名命名空间：namespace{
	声明序列可选
}

new,delete运算符：是c++用于分配，释放堆内存的两个运算符，功能对应于C语言的malloc和 free两个函数
new的语法：
类型* p = new 类型；
e.g: int * p = new int;
new的同时初始化：
类型 * p = new 类型(初始值);
e.g: int * p = new int(123)
new 一个数组：
类型 * p = new 类型[N];
new一个数组显式初始化：
类型 * p = new 类型[N]{初始值1，初始值2...};

delete用法：
delet p;
delete释放数组内存：
delete []p;

输出输出：
cout语句：cout<<表达式1<<表达式2<<endl;

inline:使用关键字inline放在函数定义的前面可将函数指定为内联函数，内联函数通常将它在程序的每一个调用点上内联展开
inline函数定义在源文件中只能出现一次，可以在程序中定义多次，但是定义必须完全相同。

面向对象编程：

class 类名{

	private:
		成员变量：
	protected:
		....
	public:
		成员函数;
};

# 成员函数的定义方式：
1.在类内部定义实现，此刻变成内联成员函数（隐式定义）
2.在类里面声明，实现在类外部，成员函数在类外部实现时，在函数名称前应该加上实现类名前缀::

# 函数重载：相同的函数名，不同的参数个数和类型
重载决议：在编译是根据参数列表对函数进行重命名，当发生函数调用时，编译器根据传入的参数逐个进行匹配以选择对应的函数，如果匹配识别，编译器就会报错。

# 对象指针：指向类对象的指针(类指针指向类变量（对象）的地址)
类指针变量赋值：
Student stu;
Student *pStu = &stu;
类指针用“->”操作符访问公有变量和方法

# this指针：指向对象自己的指针
在类中通过this指针，访问整个对象的信息
this指针是自身类型的指针，this只能在类成员函数中使用（->），在类外部无法使用,每个对象都有一个this指针，指向对象的首地址。this指针并不是类本身的一部分，在成员函数执行前构建，在成员函数执行结束时销毁

# 构造函数
构造函数是特殊的方法，用来在创建对象时初始化对象，会在对象创建的时候自动被调用
定义方式一：
class 类名
{
public:
	//类类实现构造函数，为内联函数
	类名(形参表){
		//初始化代码
	}
}
定义形式二：在类内只声明，在类外实现
定义并初始化对象：
方式一：A a(111);
方式二：A *pA = new A(2222);

# explicit 关键字
explicit(明确的)
隐式转换，除非是特意设计否则会带来程序逻辑错误，一旦错误发生，很难察觉。
在构造函数中使用`explicit`修饰符号，禁止构造函数不能在隐式转换中使用，推荐在所有的构造函数中都使用此修饰符号。

# 构造函数初始化列表
初始化成员的两种方式：
1. 构造函数体内
2. 构造函数初始化列表(按照成员变量定义的顺序初始化，而不是冒号后的顺序)
必须使用初始化列表：
1.在派生类中构造函数中初始化提供了父类的初始化
2.如果成员是常量或引用，成员无法使用赋值的方式，只能在初始化列表中初始化
3.成员变量是类类型

# 常成员变量，常成员函数（使用const修饰)
常成员变量：常成员变量是一直不变，不能被赋值的，并且构造函数中只能用初始化列表方式，其他初始化方法是非法的。
常成员函数：如果只想对对象进行读操作，则成员函数可以设计成常成员函数，在常成员函数中只能读取，而不能修改成员变量的值.使用：`返回值 函数名(参数) const`

# mutable（可变）
在c++中，mutable是为了突破const限制设置的，被mutable修饰的变量，将永远可变，即使在一个const函数中。

# 常对象
常对象保护了对象中所有的数据成员不能被任何函数访问和修改，只能使用常成员函数来访问。
定义常对象：`const 类名 对象名` 或 `类名 const 对象名`

# 拷贝构造函数
拷贝构造函数也是一种构造函数的重载，用同类型的对象来初始化新创建的对象，唯一的形参是`const 类型&`,此函数也是由系统自动调用。
定义方式:`类名(const 类名 &)`
如果没有定义类的拷贝构造函数，系统自动生成一个默认的拷贝构造函数(简单的值拷贝),一旦开发者编写拷贝构造函数，系统就不在提供。
三种需要调用拷贝构造函数
1.定义一个对象时，用另外一个对象进行初始化（赋值初始化
2.一个对象作为函数参数，以值传递的方式传入函数体
3.一个对象作为函数返回值，以值传递的方式作为函数返回

# 浅拷贝，深拷贝
浅拷贝：只是简单的拷贝成员变量的值。
浅拷贝的问题：在类的析构函数中delete销毁内存，同一块内存会被销毁两次，这样导致崩溃。

# 对象数组
定义：`类类型 数组名[N]`

# 析构函数
析构函数没有返回值，参数，无法重载，在类对象的生命周期结束的时候，被系统自动调用。
定义：`～类名()`

# 运算符重载
运算符重载是对已有的运算符赋予多重含义，使得同一个预算符作用于不同类型的数据导致不同类型的行为。预算符重载实质是函数重载。
格式：
`类型 operator 运算符(形参表){}`

# 赋值运算符重载函数
赋值运算符重载函数是特殊的成员函数，用于对象之间的赋值，本质是重载类的`=`赋值操作符。
赋值运算符重载函数与拷贝构造函数不同，拷贝构造函数是定义一个对象的时候被调用，赋值运算符重载函数是对一个已经存在的对象进行拷贝赋值（没有新的对象产生)
格式：`类型& operator=(const 类型&) `

# 取地址运算符重载函数
用于获取对象的地址，本质是重载类的`&`操作符
格式：`类型* operator&()`

# const 修饰的取地址运算符重载函数
用于获取常对象的地址，本质是重载类的`&`操作符
格式:`const 类型* operator&() const`

# static
1. 限定全局变量只能在本文件中使用
2. 限定函数只能在本文件中使用
3. 全局生存期的记忆功能
4. 在成员变量，成员方法上加static变成静态数据成员，静态成员方法，静态数据成员可以实现多个对象之间的数据共享。

# 静态成员变量
1.静态数据成员可以实现多个对象之间的数据共享，是类的所有对象的共享成员，在内存中只占有一份空间，如果改变它的值，则各个对象中这个数据成员的值都被改变
2.静态数据成员是在程序开始运行时被分配空间，到成员结束之后才释放，只要类中指定了静态数据成员，即使不定义对象，也会为静态数据成员分配空间
3.静态数据成员可以被初始化，但是只在类体外进行初始化，若为对静态数据成员赋初值，需要在类外进行。
使用：`类名::静态成员变量`或`对象.静态成员变量`

# 静态成员函数
1.将成员函数声明为静态，则可以将函数与类的对象独立开来，静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只需要使用类名加范围解析运算符就可以访问
2.静态成员函数只能访问静态成员数据，其他静态成员函数和类外部的其他函数。
3.静态成员函数没有this指针，只能访问静态成员。



