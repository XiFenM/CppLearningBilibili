#include <iostream>
#include <cstring>
using namespace std;
struct example_struct{
    int num;
    char c;
    string s;
    bool b;
    double d;
};
int main(){
    struct example_struct a{10,'x',"wqd",true,1.2342};
    cout << a.num<< endl;
    memset(&a,0,sizeof(a));
    cout << a.num<< endl;
    // 同样可以用memcpy
    // 但结构体内必须只有基本类型。
    return 0;
}
