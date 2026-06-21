#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> suffix(n);

    for(int i = 0; i < n; i++) {
        suffix[i] = 0;
        for(int j = i; j < n; j++) {
            suffix[i] += arr[j];
        }
    }

    cout << "Suffix sum array: ";
    for(int x : suffix) {
        cout << x << " ";
    }
}
