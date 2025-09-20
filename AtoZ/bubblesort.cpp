#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>&arr , int n){
    n = arr.size();
    for (int i=0 ; i<n-1;i++){
        for(int j = 0 ; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int print(vector<int>&arr , int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   
    vector<int> arr= {78,56,90,34,12,67,4};
     int n=arr.size();
    bubblesort(arr, n) ;
    print(arr,n);
    return 0;
}