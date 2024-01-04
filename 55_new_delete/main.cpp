#include <iostream>
using namespace std;
int main()
{
    int *int_p = new int(6);
    cout << int_p << endl;
    cout << *int_p << endl;
    delete int_p;
    int_p = nullptr;
    return 0;
}
