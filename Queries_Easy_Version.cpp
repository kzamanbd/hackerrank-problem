#include <bits/stdc++.h>
using namespace std;

void printMiniEl(priority_queue<int, vector<int>, greater<int>> pq) {

}

int main() {

    int query;
    cin >> query;
    priority_queue<int, vector<int>, greater<int>> evenPq, oddPq;
    while (query--) {
        int x;
        cin >> x;
        if (x == 1) {
            int y;
            cin >> y;
            if (y % 2 == 0) {
                evenPq.push(y);
            }
            else {
                oddPq.push(y);
            }
        }
        else if (x == 2) {
            if (evenPq.empty()) {
                cout << "empty";
            }
            else {
                int val = evenPq.top();
                cout << val;
                evenPq.pop();
            }
            cout << endl;
        }
        else {
            if (oddPq.empty()) {
                cout << "empty";
            }
            else {
                int val = oddPq.top();
                cout << val;
                oddPq.pop();
            }
            cout << endl;
        }
    }
    return 0;
}