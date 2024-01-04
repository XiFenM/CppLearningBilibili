#include <iostream>
using namespace std;
int main(){
    // 指针自增1后，它增加的值是它指向数据类型的字节数
    int* a = new int(10);
    cout << a<<endl;
    cout << ++a<<endl;
    delete --a;
    a=nullptr;

    // C++将数组名解释为数组第 0 个元素的地址。
    // 数组第 0 个元素的地址和数组首地址的取值是相同的。
    // 数组第 n 个元素的地址是：数组首地址+n
    int b[10] = {0};
    cout << (void*) b<< endl;
    cout << *(b+3)<<endl;
    // 数组名不一定会被解释为地址
    // sizeof 运算符用于数据名时，将返回整个数组占用内存空间的字节数。
    cout << sizeof(b)<<endl;
    return 0;
}
