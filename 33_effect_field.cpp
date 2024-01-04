#include <iostream>
using namespace std;
// 五种常见的定义变量场景：
// 1、在所有函数外定义的变量是全局变量。
// 2、在引入的头文件中定义的变量是全局变量。
// 3、在函数和语句块内部（大括号）定义的变量是局部变量。
// 4、函数的参数变量是该函数的局部变量。
// 5、函数内部用static修饰的变量是静态局部变量。
int global_value{10};
void func_example();
int main(){
    int global_value{20};
    // 局部变量与全局变量重名时，优先使用局部变量
    cout << global_value<< endl;
    // 若要使用全局变量，则在前面添加两个冒号
    cout << ::global_value<< endl;
    func_example();
    func_example();
    func_example();
    return 0;
}

void func_example(){
    static int num1{10},num2{20};
    cout << "num1:" << num1++ <<endl;
    cout << "num2:" << num2++ << endl;
}