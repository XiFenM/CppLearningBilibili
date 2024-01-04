#include <iostream>
using namespace std;

void task1();
void task2();
int main(){
    int task_num;
    cout << "请输入任务号码："<<endl;
    cin >> task_num;
    switch (task_num)
    {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    default:
        cout << "该任务不存在"<<endl;
        break;
    }
    return 0;
}

void task1(){
    int i = 1;
    int sum = 0;
    while(i <= 100){
        sum += i++;
    }
    cout << "结果为"<< sum << endl;
    return ;
}

void task2(){
    int sum = 0;
    for(int i = 0 ;sum<=5000;){
        cin >> i;
        sum += i;
        cout << "当前结果为"<< sum << endl;
    }
    cout << "最终结果为"<< sum << endl;
    return ;
}
