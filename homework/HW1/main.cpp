#include <iostream>
using namespace std;
struct st_girl
{
    int age;
    int height;
    string sc;
    bool yz;
}stgirl;

int main(){
    cout <<"请输入年龄(int):";cin>>stgirl.age;
    cout <<"请输入身高(int):";cin>>stgirl.height;
    cout <<"请输入身材(枚举，火辣、普通、飞机场):";cin>>stgirl.sc;
    cout <<"请输入颜值(0或1):";cin>>stgirl.yz;
    if((18 <= stgirl.age && stgirl.age <= 25) &&
        (165 <= stgirl.height && stgirl.height <= 178) &&
        (stgirl.sc == "火辣") &&
        (stgirl.yz)){
            cout <<"选为妃子"<<endl;
        }
    else if ((18 <= stgirl.age && stgirl.age <= 30) &&
        (160 <= stgirl.height && stgirl.height <= 165) &&
        (stgirl.sc == "火辣" || stgirl.sc == "普通") &&
        (stgirl.yz)){
            cout <<"选为宫女"<<endl;
        }
    else if ((35 <= stgirl.age && stgirl.age <= 40) &&
        (155 <= stgirl.height && stgirl.height <= 165) &&
        (stgirl.sc == "飞机场" || stgirl.sc == "普通") &&
        (!stgirl.yz)){
            cout <<"选为嬷嬷"<<endl;
        }
    return 0;
}
