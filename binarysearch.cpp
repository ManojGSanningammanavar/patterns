#include <iostream>
using namespace std;
int bs(int arr[],int tar,int st,int end){
    if(st<=end){
        int mid= st + (end-st)/2;
        if(tar>arr[mid]){
            return bs(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid]){
            return bs(arr,tar,st,mid-1) ;

        }
        else{
            return mid;

        }
    }
    return -1;
}
int main(){
    int arr[7]={1,4,5,6,9,10,19};
    int tar; 
    int st=0 ;
    int end=6;
    cout<<"enter the target : ";
    cin>>tar;
    int result = bs(arr,tar,st,end);
    if(result!=-1){
        cout<<"the  elemet is found in index "<<result<<endl;

    }
    else{
        cout<<"element not found";
    }
}