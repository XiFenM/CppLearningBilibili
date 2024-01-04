#include <iostream>
using namespace std;
void print_value(int num);
void print_pointer(int* num);
int main(){
    int num{3};
    cout << "请输入正整数"<<endl;
    cout <<"num:";
    cin >> num;
    int* pnum=&num;
    // print_value(num);
    print_pointer(pnum);
    if(num == 100){
        cout << "我变成了"<<num<<"号"<<endl;
    }
    else{
        cout << "变化失败!"<< endl;
    }
    return 0;
}

void print_value(int num){
    cout << "我是"<< num <<"号,我想变成100号!"<< endl;
    num = 100;
}
void print_pointer(int* num){
    cout << "我是"<< *num <<"号,我想变成100号!"<< endl;
    *num = 100;
}
