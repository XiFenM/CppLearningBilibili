#include <iostream>
using namespace std;

void example_func(int& a){
    a = 10;
    cout << "a:"<< a<<endl;
    return ;
}

void malloc_space(int* & p){
    p = new int{10};
    cout << p<<endl;
    cout << *p<<endl;
}

void print(const int& a ){
    // 如果不需要修改或者需要接受字面值常量，则需要在引用前加const
    // 如果不加const，则无法接受常量。因为引用的对象必须为有地址的左值。
    cout << a;
}

int main(){
    int a{999};
    example_func(a);
    cout << "a:"<< a<<endl;
    int* p;
    malloc_space(p);
    cout << p<<endl;
    cout << *p<<endl;
    print(*p);
    print(123432);
    return 0;
}
