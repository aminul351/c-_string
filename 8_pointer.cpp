#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int *y = &x;

    cout << x << " " << y << " " << *y;  // 10 0x61ff08 10(memory location's value)

    x = 100;
    cout << x << " " << y << " " << *y; // 100 0x61ff08 100(memory location's value)

    return 0;

}