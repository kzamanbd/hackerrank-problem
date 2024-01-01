#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        int space = n - 2;
        int right = n - 1;

        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;

        for (int i = 2; i < n; i++)
        {
            cout << i;

            for (int j = 0; j < space; j++)
            {
                cout << " ";
            }

            cout << right--;

            cout << endl;
        }
        for (int j = n; j > 0; j--)
        {
            cout << j;
        }
    }

    return 0;
}