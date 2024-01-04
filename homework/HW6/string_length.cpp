#include "string_length.h"
int string_length_for(const char* ch){
    int count{0};
    for(;ch&&(*ch);ch++) count++;
    return count;
}
int string_length_while(const char* ch){
    int count{0};
    while(ch&&(*ch)){
        count++;
        ch++;
    }
    return count;
}
int string_length_recursive(const char* ch){
    if(ch&&(*ch)){
        return string_length_recursive(++ch) + 1;
    }
    else{
        return 0;
    }
}
