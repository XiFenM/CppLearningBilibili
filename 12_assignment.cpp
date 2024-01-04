#include <iostream>
using namespace std;
int main(){
    int a{123},b,c,d,e;
    // 赋值等号可以连续使用
    c = b = a;
    cout << a << b << c << d << endl; 
    return 0;
}