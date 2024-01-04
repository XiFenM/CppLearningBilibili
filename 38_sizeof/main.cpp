#include <iostream>
using namespace std;
// 注意：sizeof运算符得到的结果是无符号整数，
// 当它与其它整数计算时得到结果也会是无符号整数
int main(){
    cout << "int的大小为" <<sizeof(int)<< endl;
    cout << "double的大小为" <<sizeof(double) << endl;
    cout << "char的大小为" <<sizeof(char) << endl;
    cout << "bool的大小为" <<sizeof(bool) << endl;
    cout << "long的大小为" <<sizeof(long) << endl;
    cout << "int*的大小为" <<sizeof(int*)<< endl;
    cout << "double*的大小为" <<sizeof(double*) << endl;
    cout << "char*的大小为" <<sizeof(char*) << endl;
    cout << "bool*的大小为" <<sizeof(bool*) << endl;
    cout << "long*的大小为" <<sizeof(long*) << endl;
    return 0;
}
