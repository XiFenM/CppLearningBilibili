#include <iostream>
#include <iomanip>
using namespace std;
// 宏变量,一般在main函数上方声明，大写
#define PI 3.1415926
#define MONTHS 12
// const修饰变量，任何地方都可以声明。
const int one=1;
int main(){
    cout<<"一年有"<<MONTHS <<"个月"<<endl;
    // cout输出浮点数默认精度为六位有效数字
    // 通过#include<iomanip> ，其中的setprecision可以控制输出精度。
    cout<<"圆周率："<<setprecision(10)<<(double)PI<<endl;
    return 0;
}