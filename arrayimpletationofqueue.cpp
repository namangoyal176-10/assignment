#include <iostream>
using namespace std;
    class Queue{
        int arr[1000];
        int front =0;
        int rear=-1;
     public:
   void enque(int x){
    rear++;
    arr[rear] = x;
   }
   void deque(){
    if(front>rear)return ;
    front++;
   }
   int aage(){
    return arr[front];
   }
    int akhri(){
        return arr[rear];
    }
    int sz(){
        return rear-front+1;
    }
    bool isempty() {
        return front>rear;
    }
    };
int main(){
    Queue q;
    q.enque(45);
      q.enque(67);
        q.enque(78);
          q.enque(88);
            q.deque();
            cout << q.sz() << endl;
            cout << q.aage()<< endl;
            cout << q.akhri() << endl;


while(q.sz()>0){
    cout << q.aage()<< " ";
    q.deque();
}
    return 0;
}