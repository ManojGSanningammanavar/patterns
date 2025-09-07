#include <iostream>
#include<vector>
using namespace std;

//grater of n 
// void minofn(int a,int b){
//     if(a>b){
//         cout<<a<<" is greater than "<<b;

//     }
//     else{
//         cout<<b<<" is greater than "<<a;
//     }
// }

//sum of n nors 
// int sumN(int n){
//     int sum= 0;
//     for(int i=1; i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }

// prime or not
// void prime(int n){
//     bool isprime=true;
//     for(int i=2; i<=n-1;i++)
//     {
//         if(n%i==0){
//             isprime= false;
//         }
//     }
//     if (isprime==true){
//         cout<<"the nor is prime";
//     }
//     else{
//         cout<<"nor is not prime";
//     }}

// find the nor is power of 2
// bool isnotpower(int n){
//     return n<=0 || (n&(n-1)) != 0;
// }
// int main(){

// minofn(6,9);

// int x= sumN(4);

// cout<<"the sum is "<<x;
// prime(9);

// int num;
// cout<<"enter the nor ";
// cin>>num;
// if(isnotpower(num)){
//     cout<<num<<" is not the power of 2 "<<endl;

// }
// else{
//     cout<<num<<" is the power of 2 "<<endl; 
// }


// pair sum 
// vector<int>pairsum(vector<int>nums , int target){
//     vector<int> ans;
//     int n = nums.size();
//     int i=0, j=n-1;
//     while(i<j){
//         int pairsum = nums[i]+ nums[j];
//         if(pairsum > target){
//             j--;

//         }
//         else if(pairsum < target ){
//                   i++;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums={3,4,5,6,7,8,};
//     int target = 11;
//     vector<int> ans= pairsum(nums, target);
//     cout<<ans[i]<<","<<ans[j];
// }