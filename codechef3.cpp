#include <iostream>
#include <vector>
using namespace std;

int main() {
      int t;
      cin>>t;
      while(t--){
          int n,k;
          cin>>n>>k;
          vector<int>v(n,0);
          int i=0;
          while(k){
              v[i]+=k;
              k--,i++;
              if(i==n){
                  i=0;
                  reverse(v.begin(),v.end());
              }
          }
          cout << *max_element(v.begin(),v.end())<< endl;
      }

}
