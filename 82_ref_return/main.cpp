#include <iostream>
using namespace std;

// 函数返回过程中，会先将返回值拷贝到临时位置（寄存器或栈），然后再赋值
// 如果是大结构体，则会花很多时间
// 所以对于大结构体，应该要返回引用或地址


// 引用作为返回值主要有四种情况：
// 1、返回引用形参
// 2、返回类的成员
// 3、返回全局变量或静态变量

const int& example_func( int& b){
    static int a{10};//静态变量
    b++;
    return b;
}

int main(){
    int b = 10;
    const int& a = example_func(b);
    // example_func(b) = 100; 返回引用实际上返回了*p，那么就可以赋值
    // 为了防止有心人故意捣乱，可以添加const约束
    cout << &a <<endl;
    cout << a <<endl;
    cout << &b <<endl;
    cout << b <<endl;
    return 0;
}
