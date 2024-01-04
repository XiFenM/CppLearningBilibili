#include <iostream>
using namespace std;
struct st_girl{
    char name[21];
    int age; 
    double weight; 
    char sex; 
    bool appearance; 
};
int main(){
    // 就当做普通类型数组一样
    // 数组名此时为结构体指针
    st_girl girls[3]{
        {"西施",10,40,'X',true},
        {"dsafsdf",19,70,'X',false},
        {"貂蝉",18,45,'X',true},
    };
    cout << (girls+1)->name<< endl;
    cout << (*(girls+1)).name<< endl;
    return 0;
}
