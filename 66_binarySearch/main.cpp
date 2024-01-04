#include <iostream>
using namespace std;
int search(int arr[],int len,int key){
    if(arr== nullptr || len < 1){
        return -1;
    }
    int left = 0,right = len - 1;
    int mid = (left+right)>>1;
    while(left <= right){
        mid = (left+right)>>1;
        if((*(arr+mid)) > key) right = mid-1;
        else if ((*(arr+mid)) == key) return mid;
        else left = mid+1;
    } 
    return -1;
}
int main(){
    int test_arr[10]{
        1,20,300,4000,4500,
        7000,8000,9238,10234,12432524
    };
    cout << search(test_arr,10,5000)<< endl;
    return 0;
}
