#include <iostream>
using namespace std;
// 传数组参数，必须同时传数组长度。
// 二维数组名是数组指针，也被称为行指针
void test_2d(int (*p)[3],int len){
    for(int i = 0 ;i <len;i++){
        for(int j = 0;j <3;j++){
            // p是一维数组指针，+i之后跳到第i个数组名地址
            // *取值后得到数组内指针，普通的int*
            // 再和普通数组操作一样即可
            cout << *(*(p+i)+j)<<endl;
        }
    }
}

void test_3d(int (*p)[3][3],int len){
    // p即为二维数组指针
    for(int i = 0 ;i < len;i ++){
        for(int j = 0 ;j <3 ;j ++){
            for(int k = 0; k < 3 ; k++){
                cout << *(*(*(p+i)+j)+k)<<'\t';
            }
            cout <<endl;
        }
        cout << endl<<endl;
    }
}

int main(){
    int nums[3][3]{
        1,2,3,
        4,5,6,
        7,8,9
    },nums2[3][3][3]{0};
    int (*pn)[3];
    pn = nums;
    test_2d(pn,3);
    int x{0};
    for(int i = 0 ;i < 3;i ++){
        for(int j = 0 ;j <3 ;j ++){
            for(int k = 0; k < 3 ; k++){
                nums2[i][j][k]=x++;
            }
            cout <<endl;
        }
        cout << endl<<endl;
    }
    test_3d(nums2,3);
    return 0;
}
