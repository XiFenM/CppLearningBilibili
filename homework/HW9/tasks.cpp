#include <iostream>
#include <cstring>
void task1(){
    double weights[3][4];
    double avg_weight[3]{0};
    double all_avg_weight{0};
    for(int i = 0; i < 3;i ++){
        for(int j =0;j < 4; j ++){
            std::cout << "请输入第" << i+1
                        << "小组的第" <<j+1
                        << "选手的体重："<<std::endl; 
            std::cin >> *(*(weights+i)+j);
            all_avg_weight += *(*(weights+i)+j);
            *(avg_weight+i) += *(*(weights+i)+j);
        }
        *(avg_weight+i) /= 4;
        std::cout << "第"<< i+1 <<"组选手的体重均值为"<<
                 *(avg_weight+i)<< std::endl;
    }
    all_avg_weight /= 12;
    std::cout << "全部选手的体重均值为"<< all_avg_weight<< std::endl;
}

void task2(){
    char names[3][1000];
    memset(names,0,sizeof(names));
    for(int i =0 ; i < 3; i ++){
        std::cin >>*(names+i); 
    }
    for(int i =0 ; i < 3; i ++){
        std::cout << *(names+i); 
    }
}