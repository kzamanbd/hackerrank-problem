#include <bits/stdc++.h>
using namespace std;

int main() {

    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n;
        cin >> n;
        long long sum = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}