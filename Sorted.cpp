#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        list<int> ll;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ll.push_back(x);
        }
        ll.sort();
        ll.unique();

        for (int val : ll)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}