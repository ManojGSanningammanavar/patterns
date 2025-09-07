#include<iostream>
using namespace std;

// square or rectangle pattern                   
// int main()
// {
//     int n;
//     cout<<"enterr the nor of n";
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         int m=8;
//         for(int j =1; j<=m ;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }             

int main()
{
    int n;
    cout<<"enter the nor";
    cin>>n;
    for(int i =0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j;
        }
        cout<<endl;
    }

}

