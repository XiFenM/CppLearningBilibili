#include <iostream>
using namespace std;

// 可自定义排序方式
int compare_int(const void* p1,const void* p2){
    return (*((int*)p1)) - (*((int*)p2));
}

int main(){
    int nums[10]={1243,325,124,1325,
                765,23453,65234,125,
                76575686,5762};
    qsort(nums,sizeof(nums)/sizeof(int),
        sizeof(int),compare_int);
    for(int i = 0 ;i < 10;i ++){
        cout << nums[i]<< endl;
    }
    return 0;
}
