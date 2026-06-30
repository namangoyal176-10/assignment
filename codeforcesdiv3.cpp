#include <iostream>
using namespace std;
int main(){
    long long  t;
    cin>>t;
    while(t--){
        long long  x,y;
        cin>>x>>y;
        if(x%y==0){
            cout << "yes"<< endl;
        }
        else{
            cout << "no"<< endl;
        }
    }
    return 0;
}