#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // 声明创建
    int a[10]= {0};
    int b[10] = {0,1,2,3,4,5,6,7,8,9};
    // 使用
    cout << a[0]<< endl;

    // 占用内存情况
    cout << sizeof(a)<< endl;
    // 清空数组
    // memset函数可以将内存中的一段地址全部按字节置为某个整数
    // 并不是将每一个元素赋值，而是按字节赋值
    // 只有两种情况时相同的，赋值为0和-1
    memset(a,0,sizeof(a));
    cout << a[0]<< endl;
    // 复制数组
    memcpy(a,b,sizeof(a));
    cout << a[8]<< endl;
    // memset与 memcpy本质上将一段内存进行操作，这也意味着数组的内存是连续排布的。
    return 0;
}
