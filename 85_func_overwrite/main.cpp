#include <iostream>
#include <cstring>
using namespace std;
// 使用重载函数时，如果数据类型不匹配，C++尝试使用类型转换与形参进行匹配，
// 如果转换后有多个函数能匹配上，编译将报错。

// 引用可以作为函数重载的条件，但是，调用重载函数的时候，如果实参是变量，编译器将形参
// 类型的本身和类型引用视为同一特征。
// 如果重载函数有默认参数，调用函数时，可能导致匹配失败。
// const 不能作为函数重载的特征。
// 返回值的数据类型不同不能作为函数重载的特征。
void myswap(int& a,int& b){
    int tmp{0};
    tmp = a;
    a = b;
    b = tmp;
}

void myswap(string& a,string& b){
    string tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a{9},b{10};
    string c{"qwertwerty"},d{"asdfasdfgh"};
    myswap(a,b);
    myswap(c,d);
    cout << "a:"<<a<<endl;
    cout << "b:"<<b<<endl;
    cout << "c:"<<c<<endl;
    cout << "d:"<<d<<endl;
    return 0;
}
