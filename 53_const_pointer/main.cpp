#include <iostream>
using namespace std;
void const_pointer(const int* num,int* num2);
void pointer_const(int* const num,int* num2);
void const_pointer_const(const int* const num,int* num2);
int main(){
    int num{10},num2{20};
    const_pointer(&num,&num2);
    pointer_const(&num,&num2);
    const_pointer_const(&num,&num2);
    return 0;
}
void const_pointer(const int* num,int* num2){
    // *num += 1; //常量指针无法修改对象的值，但能修改指向的对象（即指向另一个对象）
    num = num2;
}
void pointer_const(int* const num,int* num2){
    *num += 1;
    // num = num2; //指针常量可以修改对象的值，但不能修改指向的对象（不能指另一个对象）
}
void const_pointer_const(const int* const num,int* num2){
    // *num += 1;
    // num = num2;
    // 常指针常量即不能修改值，也不能修改对象
}
