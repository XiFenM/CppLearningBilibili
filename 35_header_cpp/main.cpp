#include <iostream>
#include "35_example.h"
using namespace std;
int main(){
    int num1{0},num2{0};
    cout << "num1:" ;
    cin >> num1;
    cout << "num2:" ;
    cin >> num2;
    func_example(num1,num2,"max");
    cout << "res:"<<num1 << endl;
    return 0;
}