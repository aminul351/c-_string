#include <iostream>
using namespace std;


void swapNum(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{

    int firstNum = 20;
    int secondNum = 30;
    swapNum(firstNum, secondNum);
    cout << firstNum << " " << secondNum;
    return 0;
}



/*
--> Example Without & (Pass by Value)

void swapNum(int x, int y) // Pass by value
{
    int z = x;
    x = y;
    y = z;
}
Calling swapNum(firstNum, secondNum) would swap the values of x and y inside the function, but firstNum and secondNum in the main function would remain unchanged.

Output: 20 30 (no swap happens).

--> Example With & (Pass by Reference)

void swapNum(int &x, int &y) // Pass by reference
{
    int z = x;
    x = y;
    y = z;
}
Calling swapNum(firstNum, secondNum) swaps the values of firstNum and secondNum directly.

Output: 30 20 (swap happens).

*/