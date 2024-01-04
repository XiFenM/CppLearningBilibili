#include <iostream>
using namespace std;
union U_test{
    int a;
    double b;
    char c;
}data;
// 共同体的所有变量全部共享同一块内存
// 共同体的值是最后赋值的那个变量的值.
// 应用场景一般在于网络通信时用于接收多种类型的变量,支持多种数据类型


struct st_girl{
    int num;
    union {
        int a;
        double b;
        char c;
    };// 匿名共同体,直接用于结构体
};
int main(){
    cout << "sizeof(data)=" << sizeof(data) << endl;

    cout << (void*) &data.a << endl;
    cout << (void*) &data.b << endl;
    cout << (void*) &data.c << endl;

    data.a=10;
    data.c = 'X';
    data.b=10.213443;
    cout << "a:"<< data.a<< endl;
    cout << "b:"<< data.b<< endl;
    cout << "c:"<< data.c<< endl;

    st_girl girl;
    cout << (void*) &girl.a << endl;
    cout << (void*) &girl.b << endl;
    cout << (void*) &girl.c << endl;
    // 调用时不需要经过中间体
    girl.a = 10;
    girl.c = 'u';
    girl.b=1.243;
    cout << "a:"<< girl.a<< endl;
    cout << "b:"<< girl.b<< endl;
    cout << "c:"<< girl.c<< endl;
    return 0;
}
