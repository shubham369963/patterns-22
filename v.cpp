#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    int k = 2 * n - 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << max(abs(i - n), abs(j - n)) + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}