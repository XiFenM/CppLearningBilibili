#include <iostream>
using namespace std;
// 原始字面值即为字符串的原始值，在赋值过程中不进行转义
// 语法为R"comment(string_content)comment"
// 前缀comment与后缀comment必须完全一致，且必须为英文
// 原始字面值的字符串可为多行字符串
int main(){
    string path{R"file_path(C:\learn\C++基础课件和源代码（有Linux）.pdf)file_path"};
    cout << "讲义文件地址：" << path<<endl;


    string str = R"(
        <no>0001</no>
        <name>西施</name>
        <sc>火树银花</sc>
        <yz>沉鱼</yz>
        <age>23</age>
        <weight>48.5</weight>
        <height>170</height>
        )";
    cout << str << endl;
    return 0;
}
