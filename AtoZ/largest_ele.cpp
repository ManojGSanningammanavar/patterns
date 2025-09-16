#include<iostream>
#include<vector>
using namespace std;
int largestelement(vector<int> &arr){
    int maxval = arr[0];
    int n = arr.size();
    for(int i =0; i<n; i++){
        if(arr[i]>maxval){
            maxval= arr[i];
        }
        
    }
    return maxval;
}

int main(){
    vector<int> arr={2,23,45,89,32};
    int large= largestelement(arr);
    cout<<large<<" ";

}