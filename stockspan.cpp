//stock span problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;

    for (int i = 0; i < n; i++) {

        while (!s.empty() && arr[i] >= arr[s.top()]) {
            s.pop();
        }

        if (s.empty())
            cout << i + 1 << " ";
        else
            cout << i - s.top() << " ";

        s.push(i);
    }

    cout << endl;
    return 0;
}