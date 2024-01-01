#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    for (int i = 0; i < n; i++)
    {
        // get before max
        if (i == 0)
        {
            cout << "-1 ";
        }
        else
        {
            cout << *max_element(heights.begin(), heights.begin() + i) << " ";
        }
        // get after max
        if (i == n - 1)
        {
            cout << "-1";
        }
        else
        {
            cout << *max_element(heights.begin() + i + 1, heights.end());
        }
        cout << endl;
    }

    return 0;
}