#include <bits/stdc++.h>
using namespace std;
/*
* * *
* * *
* * *
*/
void print1(int n){
    for(int i =0 ; i<n; i++){
        for(int j =0 ; j< n ; j++ ){
            cout<<"*";

        }
        cout<<endl;
    }
}

void print2(int n ){
    for(int i =0; i< n; i++){
        for(int j =0; j<= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i =1; i<=n; i++){
        for(int j = 1; j<=i ;j++){
            cout << j <<" ";
        }
        cout<<endl;
    }
}

void print4(int n){
    for (int i =1; i<=n; i++){
        for (int j =1 ; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
}
}

void print5(int n){
    for (int i=1; i<=n;i++){
        for(int j=0; j<n-i-1;j++){
            cout<<"* ";
        }
    }
}

void print11(int n){
int start = 1;
for(int i = 0 ; i<n;i++){
    if(i%2==0) start=1;
    else start=0;
    for(int j=0; j<=i; j++){
        cout<<start;
        start=1-start;
    }
    cout<<endl;
}
}

void print12(int n){
    int space = 2*(n-1);
    for (int i=0; i<n; i++){
    // number
    for(int j = 1; j<=i; j++){
        cout<<j;
    }
    //space
    for(int j=0;j<=space; j++){
        cout<<" ";

    }
    //number
    for(int j=i;j>=1;j--){
        cout<<j;

    }
    cout<<endl;
    space-=2;
}
}

int main(){
    int n;
    cin >> n;
    print12(n);
}