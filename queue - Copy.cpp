#include<bits/stdc++.h>
using namespace std;
vector<int>Q(60);
int front=-1,back=-1,N=60;

void push(int n){
    if(back == N-1){
        cout << "Queue Overflowed" << endl;
        return;
    }
    back++;
    Q[back] = n;
    if(front==-1){
        front++;
    }
}

void pop(){
    if(front==-1 || front > back){
        cout << "No elements in queue" << endl;
        return;
    }
    front++;
}

int peek(){
    int m;
    if(front==-1 || front > back){
        cout << "No elements in queue" << endl;
        return -1;
    }
    //m = Q[front];
    //cout << Q[front]; 
    return Q[front];
}

bool empty(){
    if(front==-1 || front > back){
        return true;
    }
    return false;
}

int main(){
    int k;
    //cin >> N;
    push(6);
    push(4);
    push(9);
    push(77);
    push(23);
    push(55);
    k = peek();
    cout << k << endl;
    //peek();
    pop();
    k = peek();
    cout << k << endl;
    //peek();
    k = empty();
    cout << k << endl;
}