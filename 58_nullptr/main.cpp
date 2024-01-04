#include <iostream>
using namespace std;
void add_one(int* num){
    if(num == nullptr){
        cout << "空指针异常"<<endl;
    }
    else{
        // ++和*的优先级需要注意！
        (*num)++;

    }
}
int main(){
    int* num = new int(100);
    add_one(num);
    cout << *num;
    return 0;
}

// 野指针更危险
// 指针定义初始化时，如果没有初始化值，就初始化为nullptr
// 动态分配的内存delete后，就置为nullptr
// 函数不要返回局部变量的地址

