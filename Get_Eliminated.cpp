#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string s;
        cin >> s;
        stack<char> stk;
        for (char ch : s)
        {
            if (stk.empty())
            {
                stk.push(ch);
            }
            else
            {
                if (stk.top() == '1' && ch == '1')
                {
                    stk.pop();
                }
                else
                {
                    stk.push(ch);
                }
            }
        }

        int count = 0, result = 0;
        while (!stk.empty())
        {
            if (stk.top() == '0')
            {
                count++;
            }
            else
            {
                result = max(result, count);
                count = 0;
            }
            stk.pop();
        }
        result = max(result, count);
        cout << result << endl;
    }
    return 0;
}