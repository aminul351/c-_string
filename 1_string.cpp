#include <iostream>
using namespace std;

int main()
{
    string s1 = "Hi there!";
    string s2 = " What's up";
    string s3 = "abcde";

    string s = s1 + s2;

    cout << s; // Hi there! What's up
    cout << s.size(); // 19
    cout << s[0]; // H


    // go second assci value 
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = s[i] + 1;
    }

    cout << s; // Ij!uifsf"!Xibu(t!vq

    // delete last char
    s1.pop_back();
    cout << s1; // Hi there

    // delete first item
    s3.erase(s3.begin() + 0);
    cout << s3; // bcde


    // take sting as input without space
    string x;
    cin >> x;
    cout << x; // abc

    // take sting as input without space
    string y;
    getline(cin, y);
    cout << y; // abc def

    // remove first and last char from input
    string z;
    cin >> z;   // abcde
    z.erase(z.begin());
    z.pop_back();
    cout << z;  // bcd

    return 0;
}