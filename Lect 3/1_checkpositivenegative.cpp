#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x > 0)
    {
        cout << "x is positive";
    }
    if (x < 0)
    {
        cout << "x is negative";
    }
    else
    {
        cout << "x is zero";
    }
}