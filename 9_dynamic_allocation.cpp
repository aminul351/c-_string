#include <iostream>
using namespace std;

int main()
{
    int *x = new int;
    *x = 10;
    cout << x << " " << *x;  // 0x10c1ef0 10
    return 0;
}