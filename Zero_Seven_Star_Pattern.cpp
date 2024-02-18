#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << "*";
            }
            else if (i + j == n - 1) {
                cout << "*";
            }
            else {
                if (i < mid) {
                    if (i < j) {
                        cout << "7";
                    }
                    else {
                        cout << "0";
                    }
                }
                else {
                    if (i < j) {
                        cout << "7";
                    }
                    else {
                        cout << "0";
                    }
                }

            }
        }
        cout << endl;
    }
    return 0;
}