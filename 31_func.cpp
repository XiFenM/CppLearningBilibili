#include <iostream>
using namespace std;
// 函数声明
void func_example(int &num1,int num2,string req_type);

int main(){
    int x{0},y{0};
    string req;
    cout << "x:";
    cin >> x;
    cout << "y:";
    cin >> y;
    cout << "请输入你想要的操作：";
    cin >> req;
    func_example(x,y,req);
    cout << "res:" << x <<endl;
    return 0;
}

void func_example(int &num1,int num2,string req_type){
    if(req_type == "max"){
        num1 = (num1 > num2)? num1:num2;
    }
    else if (req_type == "min"){
        num1 = (num1 < num2)? num1:num2;
    }
}

