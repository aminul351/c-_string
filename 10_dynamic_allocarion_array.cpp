#include <iostream>
using namespace std;

int main()
{

    // take no of element
    int n;
    cin >> n;

    // take memory from heap
    int *x = new int[n];

    // take array input
    for (int i = 0; i < n; i++)
        cin >> x[i];

    // show heap location
    cout << x << endl;

    // array loop
    for (int i = 0; i < n; i++)
        cout << x[i] << endl;
    delete[] x;
    return 0;
}
