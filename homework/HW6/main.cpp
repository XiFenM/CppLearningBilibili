#include <iostream>
#include <string_length.h>
using namespace std;
int main(){
    char char_array[100];
    cin >> char_array;

    cout <<"数组长度为:"<< string_length_for(char_array) <<endl;
    cout <<"数组长度为:"<< string_length_while(char_array) <<endl;
    cout <<"数组长度为:"<< string_length_recursive(char_array) <<endl;

    return 0;
}