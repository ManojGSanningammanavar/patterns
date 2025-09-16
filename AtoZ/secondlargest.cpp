#include<iostream>
#include<vector>
using namespace std;
int second_largest(vector<int> &a){
    int  largest= a[0];
    int slarge= -1;
    for(int i = 0; i< a.size(); i++){
        if(a[i]>largest){
            slarge= largest;
            largest= a[i];
        }
        else if(a[i]<largest && a[i]>slarge){
            slarge= a[i];
        }
    }
    return slarge;
}
int main(){
    vector<int> arr={12,56,78,90,34,56};
    int second = second_largest(arr);
    cout<<second;
}