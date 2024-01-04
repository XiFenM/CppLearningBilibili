#include <iostream>
using namespace std;
string month_name[12] = {
    "January","February","March","April","May",
    "June","July","August","September","October",
    "November","December"
    };
char month_name_c[12][20] = {
    "January","February","March","April","May",
    "June","July","August","September","October",
    "November","December"
    };
int main(){
    int month{0};
    cout << "请输入月份"<<endl;
    cin >>month;
    while (month<=0 || month>12){
        cout << "月份输入不合法，请重新输入"<<endl;
        cin >> month; 
    }
    cout << "月份英文名为"<< month_name_c[month - 1];
    return 0;
}
