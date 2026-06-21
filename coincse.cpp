#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int n;
    cin >> n;

    int x;
    cin >> x;

    vector<int>c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    vector<int> dp(x+1,INT_MAX);

    dp[0] = 0;

    for(int i = 1 ; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - c[j] >= 0){
                dp[i] = min(dp[i],(dp[i-c[j]] + 1));
            }
        }
    }

    if(dp[x] > x){
        cout << -1 << endl;
    }
    else{
         cout << dp[x] << endl;
    }

    return 0;
}