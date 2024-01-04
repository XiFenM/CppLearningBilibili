#include <iostream>
using namespace std;
int main(){
    int num{0};
    double decmial{0.0};
    char c{'a'};
    string s{"string"};
    bool check{true};

    cout << "请输入整数：";
    cin >> num;
    cout << "已输入的整数："<<num<<endl;

    cout << "请输入小数：";
    cin >> decmial;
    cout << "已输入的整数："<<decmial<<endl;

    cout << "请输入单个字符：";
    cin >> c;
    cout << "已输入的整数："<<c<<endl;

    cout << "请输入字符串：";
    cin >> s;
    cout << "已输入的整数："<<s<<endl;

    cout << "请输入布尔值：";
    cin >> check;
    cout << "已输入的布尔值："<<check<<endl;
}