#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"a:";
    cin>>a;
    cout <<"b:";
    cin>>b;
    //  表达式一 ? 表达式二 : 表达式三
    // 如果表达式一为真，那么结果为表达式二的值
    // 如果表达式一为假，那么结果为表达式三的值
    c = (a>b)?a:b;
    cout << "c:"<<c<<endl;
    return 0;
}