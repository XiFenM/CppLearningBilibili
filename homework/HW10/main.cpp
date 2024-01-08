#include <iostream>
#include "string2int.h"
using namespace std;

int main(){
    int num{0},become{10};
    cout << "请输入一个整数:"<<endl;
    cin >> num;
    cout <<"想转换成什么进制?"<<endl;
    cin >> become;
    if(become==2){
        char* result = string2int2(num);
        cout << "转换结果为"<<result<< endl;
    }
    else if (become==10){
        char* result = string2int10(num);
        cout << "转换结果为"<<result<< endl;
    }
    return 0;
}
