#include <iostream>
using namespace std;

// smallest and largest of an array elements

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n]; // Now 'n' has a valid value
    
//     cout << "Enter the array elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int  index=0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//             index = i;
//         }
//     }
//     cout << "The largest element is: " << largest << endl;
//     cout<<index;
//     return 0;
// }


//LINEAR SEARCH

// int main(){
// int n;
// cout << "Enter the size of the array: ";
// cin >> n;
// int arr[n]; // Now 'n' has a valid value

// cout << "Enter the array elements: " << endl;
// for (int i = 0; i < n; i++) {
//     cin >> arr[i];
// }
// int key ;
// int index;
// cout<<"Enter the key to search : "<<endl;
// cin>>key;
// for(int i=0; i<n; i++){
//     if(arr[i]==key){
//          index= i;
//     }
//     return -1;
// }
// cout<<"The key is found at index : "<<index;

// }


// REVERSE AN ARRAY (two pointer approach)

// int reverse(int arr[],int size){
//     int start = arr[0];
//     int end = size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//          start ++;
//          end --;
//     }
// }

// int main() {
//     int arr[5] = {3, 4, 6, 8, 5};
//     int size = 5;

//     // reverse(arr, size);
//     int pro=1;
   
//     for (int i = 0; i < size; i++) {
//         pro *=arr[i];
//     }
//    cout<<pro;
//     return 0;
// }


// unique elements in an array
// int unique(int arr[], int n){
//     for(int i = 0 ; i < n ; i++){
//         bool isunique = true;
//         for(int j =0; j<n; j++){
//             if (i != j && arr[i] == arr[j]) {
//                 isunique = false;
//                 break;
//             }
//         }
//         if(isunique){
//             cout<< arr[i] <<" ";
//         }
//     }
// }

//print array without repearting 

// int PritnByNotRepeating(int arr[], int n){
//     for(int i = 0 ; i < n ; i++){
//         bool isunique = true;
//         for(int j =0; j<i; j++){
//             if ( arr[i] == arr[j]) {
//                 isunique = false;
//                 break;
//             }
//         }
//         if(isunique){
//             cout<< arr[i] <<" ";
//         }
//     }
// int main(){
//     int arr[12]={4,3,3,4,5,6,7,6,7,2,1,6};
//     int n = 12;
//     cout<< "unique elemets : ";
//     unique(arr, n);
//     return 0;
// }


