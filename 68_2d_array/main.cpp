#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int nums[3][3]{
        1,2,3,
        4,5,6,
        7,8,9
    },nums2[3][3]{0};
    cout << nums[2][1]<< endl;
    cout << sizeof(nums)<< endl;
    // 清空
    // memset(nums,0,sizeof(nums));
    // cout << nums[2][1]<< endl;、
    // 复制
    memcpy(nums2,nums,sizeof(nums));
    cout << nums2[2][1]<< endl;
    // 由于内存地址连续，所以也可以用整型指针操作
    // 但二维数组原本并不是普通的整型指针，而是数组指针
    int* p = (int*)nums2;
    for(int i = 0 ;i <9;i++){
        cout << *(p+i)<< endl;
    }

    return 0;
}
