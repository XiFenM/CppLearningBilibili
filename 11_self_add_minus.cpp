#include <iostream>
using namespace std;
int main(){
    // ++变量名：先自增1，再执行别的表达式
    int a{0},b{0};
    b = ++a;
    cout << "b = ++a的结果:"<<endl;
    cout <<"a:"<<a<<'\n'<<"b:"<<b<<endl;

    // 变量名++：先执行别的表达式，再自增1
    a = 0;
    b = 0;
    b = a++;
    cout << "b = a++的结果:"<<endl;
    cout <<"a:"<<a<<'\n'<<"b:"<<b<<endl;
    // --变量名：先自减1，再执行别的表达式
    a = 0;
    b = 0;
    b = --a;
    cout << "b = --a的结果:"<<endl;
    cout <<"a:"<<a<<'\n'<<"b:"<<b<<endl;
    // 变量名--：先执行别的表达式，再自减1
    a = 0;
    b = 0;
    b = a--;
    cout << "b = a--的结果:"<<endl;
    cout <<"a:"<<a<<'\n'<<"b:"<<b<<endl;
}