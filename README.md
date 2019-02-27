c++入门

typeid()操作符：获取一个表达式的类型，返回结果是const type_info&类型
使用方法：typeid(类型或变量或表达式).name() 返回类型名字字符串

c++新增类型：
wchar_t:用在国际化程序的实现中，unicode编码的宽字符一般以wchar_t类型存储
bool：1个字节，用于条件判断，false为假，true为真
longlong：long占4个字节，longlong占8个字节
auto：c++11引入的auto类型，能让编译器自动分析表达式的类型