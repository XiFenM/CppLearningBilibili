#include <iostream>
#include <time.h>
using namespace std;
// 在函数名前添加inline，可以使得函数成为内联函数
// 在编译时，编译器会将inline function 直接放到调用的位置。
// 使得运行时的逻辑段不用跳来跳去
// 但如果函数太大，则编译器无法做到inline。
// inline function不能递归

inline void example_func(){
    int sum{0};
    for(int i = 0 ; i <100;i++){
        sum += i;
    }
}

void example_func2(){
    int sum{0};
    for(int i = 0 ; i <100;i++){
        sum += i;
    }
}

int main(){
    clock_t start,end;//定义clock_t变量
    start = clock();//开始时间
    for(int i = 0 ; i <10000;i++){
        example_func();
    }
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;

    start = clock();//开始时间
    for(int i = 0 ; i <10000;i++){
        example_func2();
    }
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;
    return 0;
}
