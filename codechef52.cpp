#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        for (int K = M; K >= 0; K--) {
            if ((N - K) % 2 == 0 &&
                N >= K &&
                N <= 3 * K) {

                cout << M - K << endl;
                break;
            }
        }
    }

    return 0;
}