#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > i)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
        }
        for (int j = n; j > 0; j--)
        {
            if (j > i)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }
}