#include <iostream>
#include <cstring>
using namespace std;
// 与python一模一样的函数参数默认值使用方法
void print_test(int para1 , double para2=1.23,char para3 = 'X',string para4 = "WEFWC"){
    cout << para1 << para2
        << para3<<para4<<endl;
}
int main(){
    print_test(13);
    
    return 0;
}
