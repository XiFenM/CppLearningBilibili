#include <iostream>
using namespace std;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
int main(){
    cout << "int的大小为" <<sizeof(int32_t)<< endl;
    cout << "short的大小为" <<sizeof(int16_t) << endl;
    cout << "long的大小为" <<sizeof(int64_t) << endl;
    return 0;
}
