#include "reverseStr.h"

int StringLength(const char* str){
    int len = 0;
    for(; *(str);str++){
        len ++;
    }
    return len;
}

char* reverseString(const char* str){
    int len = StringLength(str);
    char* result = new char[len + 1];
    *(result + len) = '\0';
    for(int i = len - 1;i >= 0;i --){
        *(result + (len - 1 - i)) = *(str + i);
    }
    return result;
}

void reverseStringInplace(char* str){
    int len = StringLength(str);
    char tmp = '\0';
    for(int i  = 0 ; i < (len>>1);i++){
        tmp = *(str +i);
        *(str + i)=*(str + len - 1 - i);
        *(str + len - 1 - i) = tmp;
    }
}
