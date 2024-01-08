#include <iostream>
using namespace std;
int main(){
    // 引用的本质是指针常量
    int input{0};
    // 引用和指针常量都需要在声明时初始化
    int& input_alias = input;
    int* const input_address = &input;
    cout << &input <<endl;
    cout << input <<endl;
    cout << &input_alias <<endl;
    cout << input_alias<<endl;
    cout << input_address <<endl;
    cout << *input_address <<endl;

    input_alias = 10;
    cout << "修改后："<<endl;
    cout << &input <<endl;
    cout << input <<endl;
    cout << &input_alias <<endl;
    cout << input_alias<<endl;
    cout << input_address <<endl;
    cout << *input_address <<endl;

    return 0;
}
