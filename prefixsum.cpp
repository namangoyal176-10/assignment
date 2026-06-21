#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    vector<int>arr(n);
    dp[0]=arr[0];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    dp[i] = (dp[i-1]+arr[i]);
    cout << dp[i] << endl;
    }
    return 0;
}