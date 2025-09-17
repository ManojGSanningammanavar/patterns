#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,1,2,2,2,2,3,3,3,4,5};
    int i= 0;
    for(int j =1 ; j<arr.size(); j++){
        if(arr[i]!=arr[j]){
            arr[i+1]= arr[j];
            i++;
        }
    }
   cout<< i+1<<" ";
   return 0;
}