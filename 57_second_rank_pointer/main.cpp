#include <iostream>
using namespace std;
void malloc_int(int** p);
int main(){
    // 二级指针即指针变量的地址
    // 当我们需要用函数来修改指针本身时就需要用到二级指针。
    int * p= nullptr;
    malloc_int(&p);
    cout <<"地址为"<< p << endl;
    cout <<"值为"<< *p <<endl;
    delete p;
    p= nullptr;
    return 0;
}
void malloc_int(int** p){
    *p = new int(10);
}
