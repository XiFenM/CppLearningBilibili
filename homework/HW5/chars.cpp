#include <iostream>
#include "chars.h"
int ctoi(const char ch){
    if('0'<=ch && ch <= '9') return ch - '0';
    else{
        std::cout << "输入异常"<<std::endl;
        return -1;
    }
}

char next_char(const char ch){
    if(('A'<=ch&&ch<'Z')||('a'<=ch&&ch<'z')){
        return (char)(ch+1);
    }
    else{
        std::cout << "输入异常"<<std::endl;
        return '!';
    }
}
bool isalpha(const char ch){
    if(('A'<=ch&&ch<='Z')||('a'<=ch&&ch<='z')) 
        return true;
    else return false;
}
bool isalnum(const char ch){
    if(('A'<=ch&&ch<='Z')||
        ('a'<=ch&&ch<='z')||
        ('0'<=ch&&ch<='9'))
        return true;
    else return false;
}
bool isdigit(const char ch){
    if(('0'<=ch&&ch<='9'))
        return true;
    else return false;
}
bool islower(const char ch){
    if('a'<=ch&&ch<='z')
        return true;
    else return false;
}
bool isupper(const char ch){
    if('A'<=ch&&ch<='Z')
        return true;
    else return false;
}
char& tolower(char& ch){
    if('A'<=ch&&ch<='Z'){
        ch = ch -'A' + 'a';
    }
    return ch;
}
char& toupper(char& ch){
    if('a'<=ch&&ch<='z'){
        ch = ch -'a' + 'A';
    }
    return ch;
}
