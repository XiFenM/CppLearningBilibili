#include <iostream>
using namespace std;
// 对结构体用 memset()函数可能会造成内存泄露。
// 即，当结构体里有指针时，memset会导致指针指向的对象丢失
struct qq_message{
    int from_qq;
    int to_qq;
    char context[2048];
};
int main(){
    qq_message message_test;

    return 0;
}
