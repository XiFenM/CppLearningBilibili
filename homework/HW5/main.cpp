#include <iostream>
#include "chars.h"
using namespace std;
int main(){
    char ch;
    cin >> ch;
    cout <<"next_char:"<< next_char(ch)<<endl;
    cout <<"char_to_integer:"<< ctoi(ch)<<endl;
    cout <<"isalpha:"<< isalpha(ch)<<endl;
    cout <<"isalnum:"<< isalnum(ch)<<endl;
    cout <<"isdigit:"<< isdigit(ch)<<endl;
    cout <<"islower:"<< islower(ch)<<endl;
    cout <<"isupper:"<< isupper(ch)<<endl;
    cout <<"tolower:"<< tolower(ch)<<endl;
    cout <<"toupper:"<< toupper(ch)<<endl;
    return 0;
}
