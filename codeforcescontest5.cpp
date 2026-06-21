#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
    cin>>t;
      long long  n;
 
    while(t--){
      cin>>n;
    vector<int >arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long  sum=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
         if(arr[j]>arr[i]){
            arr[j]=arr[i];
         }
         }
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
       cout << sum << endl;
}
return 0;
    }
