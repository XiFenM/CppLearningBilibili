#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // 初始化c语言字符串，需要最后一个字符以\0结尾。
    // 所以需要多申请一个字节来存放。
    char name[11]{"hellohello"},name2[11];
    cout << sizeof(name)<< endl;
    // 清空
    // memset(name,0,sizeof(name));
    // 复制
    strcpy(name2,name);//把src字符串全部拷贝到dest中
    // 如果dest空间不够大，会发生越界
    cout << name2 << endl;
    // 按大小复制，不会在末尾添加\0
    // 同样，如果dest空间不够大，会发生越界
    strncpy(name2,"asfds",5);
    cout << name2 << endl;
    // 获取字符串实际大小(不包含\0)
    cout << strlen(name2)<< endl;
    // 字符串拼接,将src字符串拼接到dest后面
    // 如果字符串dest容量不够,会发生数组越界。
    cout << strcat(name2,name)<< endl;
    // 还有很多字符串函数用于处理c风格字符串
    // strcmp()比较两字符串
    // strchr 查找某个字符第一次出现的位置
    // strrchr 查找某个字符最后一次出现的位置
    // strstr 字符串字串匹配
    // 可用于与string的相互操作，因为本质上string也是字符数组的包装类
    return 0;
}
