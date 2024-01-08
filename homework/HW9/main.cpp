#include <iostream>
#include "tasks.h"
using namespace std;

int main(){
    int task_num{0};
    cin >> task_num;
    if(task_num==1){
        task1();
    }
    else if (task_num==2){
        task2();
    }
    return 0;
}
