#include <iostream>
#include "reverseStr.h"
using namespace std;
int main(){
    char str[50];
    cin >> str;
    char* result_str = reverseString(str);
    cout << result_str<<endl;
    reverseStringInplace(result_str);
    cout << result_str;
    delete[] result_str;
    return 0;
}
