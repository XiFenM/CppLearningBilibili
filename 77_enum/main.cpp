#include <iostream>
using namespace std;
int main(){
    enum colors{red,yellow,blue};
    // 枚举变量相当于有范围的整型
    colors background = red;
    cout << background;
    return 0;
}
