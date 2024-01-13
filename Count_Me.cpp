#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase--)
    {
        string str, word;
        getline(cin, str);
        stringstream stream(str);
        map<string, int> mp;
        string maxKey;
        int mxCount = INT_MIN;
        while (stream >> word)
        {
            mp[word]++;
            if (mxCount < mp[word])
            {
                maxKey = word;
                mxCount = mp[word];
            }
        }
        cout << maxKey << " " << mxCount << endl;
    }
    return 0;
}