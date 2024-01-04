#include <iostream>
using namespace std;
int main(){
    // 声明 / 创建引用的语法：数据类型 & 引用名 = 原变量名;
    int a = 3; // 声明普通的整型变量。
    int& ra = a; // 创建引用 ra，ra 是 a 的别名。
    int& ra2 = ra;
    cout << " a 的地址是：" << &a << "， a 的值是：" << a << endl;
    cout << "ra 的地址是：" << &ra2 << "，ra 的值是：" << ra2 << endl;
    ra = 5; 
    cout << " a 的地址是：" << &a << "， a 的值是：" << a << endl;
    cout << "ra 的地址是：" << &ra2 << "，ra 的值是：" << ra2 << endl;
    return 0;
}
