#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int action;
        cin >> action;
        if (action == 0)
        {
            int a;
            cin >> a;
            pq.push(a);
            cout << pq.top();
        }
        else if (action == 1)
        {
            if (pq.empty())
            {
                cout << "Empty";
            }
            else
            {
                cout << pq.top();
            }
        }

        else if (action == 2)
        {
            pq.pop();
            if (pq.empty())
            {
                cout << "Empty";
            }
            else
            {
                cout << pq.top();
            }
        }

        cout << endl;
    }

    return 0;
}