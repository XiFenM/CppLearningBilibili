#include <iostream>
using namespace std;
int main(){
    int* arr = new int[10]{0,1,2,3,4,5,6,7,8,9};
    cout <<"指针变量本身的大小："<< sizeof(arr) << endl;
    for(int i = 0 ;i < 10;i++){
        cout << *(arr+i)<< endl;
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}
