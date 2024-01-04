#include <iostream>
using namespace std;
void display(const char * ch);
int main(){
    char char_array[100];
    cin >> char_array;
    display(char_array);
    return 0;
}
void display(const char* ch){
    const char* head = ch;
    cout << "正序显示:";
    for(;ch&&(*ch);ch++){
        cout << *ch <<' ';
    }
    cout << endl;
    cout << "逆序显示:";
    ch--;
    for(;ch&&(*ch);ch--){
        cout << *ch <<' ';
        if(ch==head) break;
    }
}
