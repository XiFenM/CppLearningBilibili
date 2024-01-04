#include <iostream>
using namespace std;
// 使用void * 可以接受任意类型的指针
// 纯粹的那一个地址，而不关心数据类型的长度
void display_address_value(string variable_name,void* vp);
int main(){
    int a= 99;
    char b = 'X';    
    cout << "a 的地址是：" << (void*)&a << endl;
    cout << "b 的地址是：" << (void*)&b << endl;
    display_address_value("a",&a);
    display_address_value("b",&b);
    cout << sizeof(int) <<endl;
    cout << sizeof(char) <<endl;
    return 0;
}
void display_address_value(string variable_name,void* vp){
    cout << variable_name << "的地址是："<< vp << endl;
    cout << variable_name << "的值是："<< *((char *)vp) << endl;
}

