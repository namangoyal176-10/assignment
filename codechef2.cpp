#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int i;
    
    while (t--) {
        int n,m;
        cin >> n >> m;
        string a, b;
        string c="";
        cin >> a >> b;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
              c+=a[i];
            }
            else {
                break;
            }
            
        }
        cout << c<< endl;
        


    }
    


}