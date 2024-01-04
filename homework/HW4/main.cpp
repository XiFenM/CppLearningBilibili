#include <iostream>
using namespace std;
void task1();
void task2();
int main(){
    int task_num;
    cout << "请输入任务编号:"<<endl;
    cin >> task_num;
    if(task_num==1){
        task1();
    }
    else if (task_num == 2){
        task2();
    }
    return 0;
}
void task1(){
    int input_num{0},sum{0},count{0};
    cout <<"请逐个输入整数:"<<endl;
    while(true){
        cin >> input_num;
        if (!(input_num)) break;
        if(input_num<1||input_num>100) continue;
        sum += input_num;
        count ++;
    }
    cout <<"有效数据个数为"<<count<<endl;
    cout <<"有效数据总和为"<<sum<<endl;
}
void task2(){
    cout <<"结果为"<<endl;
    for(int i =1; i <=100;i++){
        if(!(i%5)){
            
            cout <<i<<endl;
        }
    }
}

