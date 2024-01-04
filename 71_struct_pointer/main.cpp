#include <iostream>
#include<cstring>
using namespace std;
struct st_girl
{
    char name[21];
    int age; 
    double weight; 
    char sex; 
    bool appearance; 
};
void display_girl(const st_girl* p_girl){
    cout << "名字："<< p_girl->name<<'\n'
        << "年龄："<< p_girl->age<<'\n'
        << "体重："<< p_girl->weight<<'\n'
        << "性别："<< p_girl->sex<<'\n'
        << "外貌："<< p_girl->appearance<<endl;
}

int main(){
    struct st_girl girl{"西施",18,50,'X',true};
    display_girl(&girl);
    // 动态分配
    st_girl* girl2 = new st_girl;
    // 字符数组不能直接赋值，需要用strcpy函数
    strcpy(girl2->name , "asdsfd");
    girl2->age =10;
    girl2->weight=100;
    girl2->sex = 'Y';
    girl2->appearance=true;
    display_girl(girl2);
    delete girl2;
    return 0;
}
