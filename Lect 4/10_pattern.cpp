#include <iostream>
using namespace std;

int main()
{
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     * * * *
     * * *
     * *
     *
     */
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}