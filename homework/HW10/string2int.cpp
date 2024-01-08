#include <cstring>
#include <iostream>
char* string2int2(int num){
    int res{0},dec{0},len{0};
    char* result = new char[1000];
    memset(result,0,sizeof(result));
    while(num){
        dec = num%2;
        num/=2;
        *(result + len) = (char)('0'+dec);
        len++;
    }
    *(result + len) = '\0';
    // 反转字符串
    char tmp;
    for(int i = 0 ;i < (len>>1);i++){
        tmp = *(result + i);
        *(result + i) = *(result + len - 1 -i);
        *(result + len - 1 -i) = tmp;
    }
    return result;
}
char* string2int10(int num){
    int res{0},dec{0},len{0};
    char* result = new char[1000];
    memset(result,0,sizeof(result));
    while(num){
        dec = num%10;
        num/=10;
        *(result + len) = (char)('0'+dec);
        len++;
    }
    *(result + len) = '\0';
    // 反转字符串
    char tmp;
    for(int i = 0 ;i < (len>>1);i++){
        tmp = *(result + i);
        *(result + i) = *(result + len - 1 -i);
        *(result + len - 1 -i) = tmp;
    }
    return result;
}