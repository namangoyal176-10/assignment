#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int ans = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {

                int total = 0;

                for (int x = 0; x < N; x++) {
                    if (x == i || x == j) {
                        total += A[x];
                    } else {
                        total += A[x] / 2;
                    }
                }

                if (total > K) {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}