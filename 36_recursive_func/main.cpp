#include <iostream>
int recursive_func(int num);
int main(){
    int n = 3;
    std::cout << "想要获取斐波那契数列的第几项?"<< std::endl;
    std::cin>> n;
    std::cout << "斐波那契数列的第" << n << "项是:"
                << recursive_func(n) << std::endl;
    return 0;
}

int recursive_func(int num){
    if(num == 1){
        return 1;
    }
    else if(num == 2){
        return 2;
    }
    else if (num > 2){
        return recursive_func(num - 1) + recursive_func(num - 2);
    }
    else{
        std::cout << "请输入正整数!"<< std::endl;
    }
    return 0;
}