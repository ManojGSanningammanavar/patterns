#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,2,3,1,4,3};
    int i= 0;
    for(int j =1 ; j<arr.size(); j++){
        if(arr[i]!=arr[j]){
            arr[i+1]= arr[j];
            i++;
        }
    }
    return i+1;
}