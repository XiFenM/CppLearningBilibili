#include <iostream>
using namespace std;
// 应用函数指针，可以将函数视为变量，使得调用函数更加灵活
// 让主逻辑函数可以接受自定义其中某几个步骤
void zs(int a) {
    cout << "zs"<< a <<endl;
}
void ls(int a) {
    cout << "ls" << a << endl;
}
void show(void (*pf)(int),int b){
    pf(b);
    cout << "相同的部分"<< endl; 
}

int main(){
    void (*pperson)(int);
    pperson = ls;
    show(pperson,10);
    show(zs,9);
    return 0;
}
