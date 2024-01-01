#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int height, climb, slip;
        cin >> height >> climb >> slip;

        if (height <= climb)
        {
            cout << 1;
        }
        else if (climb > slip)
        {

            long long result = ceil((height - climb) * 1.0 / (climb - slip) * 1.0);
            cout << result * 2 + 1;
        }
        else
        {
            cout << "Impossible";
        }
        cout << endl;
    }
    return 0;
}