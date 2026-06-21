#include <bits/stdc++.h>
using namespace std;

int main() {
      long long t;
    cin>>t;
      long long  n;
 
    while(t--){
      cin>>n;
    vector<long long >arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
         if(arr[i+1]<arr[i]){
          arr[i+1]+=arr[i];
         }
    }
       cout << arr[n-1] << endl;
}
return 0;
    }
