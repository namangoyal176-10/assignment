// #include <iostream>
// using namespace std;
// class stack{
//     private :
//     int arr[1000];
//     int top = -1;
//     public :
//     void push(int x) {
//         top++;
//         arr[top] =x; }
//         void pop() {
//             if(top!=-1) top--;
//             int sz(){
//                 return top+1;
//             }
//             int top(){
//                 return arr[top];
//             } 
//             bool isempty(){
//                 if(top == -1)return true;
//                 return false;
//             }
// bool isfull(){
//     if(top == 999)return true;
//     return false;
// }
//         }
    
//     }
// int main(){
//     stack s;
//     int n;
//     cin>> n;
//     for(int i=0;i<n;i++){
//         int a;
//         cin >> a;
//         s.push(a);
//     }
//     cout << s.size()<< endl;
//     cout << s.top()<< endl;
//     while(!s.is empty()){
//         cout << s.top()<< endl;
//         s.pop();
//     }
//     return 0;
// }
// }
#include <iostream>
using namespace std;

class Stack {
private:
    int arr[1000];
    int topIndex = -1;

public:
    void push(int x) {
        if (topIndex < 999) {
            arr[++topIndex] = x;
        }
    }

    void pop() {
        if (topIndex != -1)
            topIndex--;
    }

    int size() {
        return topIndex + 1;
    }

    int top() {
        if (topIndex == -1)
            return -1;
        return arr[topIndex];
    }

    bool isempty() {
        return topIndex == -1;
    }

    bool isfull() {
        return topIndex == 999;
    }
};

int main() {
    Stack s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.push(a);
    }

    cout << s.size() << endl;
    cout << s.top() << endl;

    while (!s.isempty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}