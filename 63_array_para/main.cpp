#include <iostream>
using namespace std;
void operate_array(int a[], int len)
{
    // cout << "大小："<<sizeof(a)<< endl;
    for (int i = 0; i < len; i++)
    {
        cout << *(a + i) << endl;
    }
}
int main()
{
    // int a[10]{1,23,43,576,68,34,24,435,56,123};
    // operate_array(a,sizeof(a)/sizeof(int));
    char a[20];        // 这是一个长度为 20 的字符型数组。
    int *p = (int *)a; // 让整型指针 p 指向数组 a 的内存。
    for (int ii = 0; ii < 10; ii++)
    {
        p[ii] = ii + 300; // 用数组表示法操作指针。
    }
    for (int ii = 0; ii < 10; ii++)
    {
        cout << "*(p+" << ii << ")的值是：" << *(p + ii) << endl;
    }

    return 0;
}
