#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int> &arr , int n){
    n= arr.size();
    for(int i =0; i<n-1;i++){
        int smallest= i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}

int print(vector<int> &arr , int n){
    n= arr.size();
    for(int i=0;i<n-1; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr={12,45,1,23,87,32,17,3};
    int n =arr.size() ;
    selectionsort(arr, n);
    print(arr,n);
}
