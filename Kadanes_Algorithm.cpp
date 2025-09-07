#include<iostream>
#include<vector>
#include <climits>      // For INT_MIN
#include <algorithm>    // for max
using namespace std;

// printing sub array
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int st=0 ; st<5; st++){
//         for(int end = st; end<5; end++){
//             for(int i = st ; i<= end; i++){
//                 cout<<arr[i];

//             }
//             cout<<" ";

//         }
//         cout<<endl;
//     }

// }

// FINDNG MAX SUM OF SUBARRAY (BRUTE FORCE)
int main(){
    int n = 5;
    int arr[5]={1,2,4,6,-4};
    int maxsum = INT_MIN;
    for (int st = 0 ; st<n; st++){
        int currentsum = 0;
        for(int end = st ; end< n ; end++){
            currentsum += arr[end];
            maxsum= max(currentsum, maxsum);
        }
    }
    cout<<"the max sum of the sub array : "<<maxsum;

}