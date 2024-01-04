#include "35_example.h"
void func_example(int &num1,int num2,std::string  req_type){
    if(req_type == "max"){
        num1 = (num1 > num2)? num1:num2;
    }
    else if (req_type == "min"){
        num1 = (num1 < num2)? num1:num2;
    }
}