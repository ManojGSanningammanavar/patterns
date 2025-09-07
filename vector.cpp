#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     vector<int>vec={1,2,3,4};
//     cout<<vec[2];
// }

// int main(){
//     vector<char>vec{'a', 'b', 'c', 'd'};
//     for(char val : vec){
//         cout<<val<<"\t";
//         }
   
// }

//function 
int main(){
    vector<int>vec;
    vec.push_back(56);
    vec.push_back(15);
    vec.push_back(90);
    vec.push_back(6);
    cout<<"size of the vec : "<<vec.size()<<endl;
    vec.pop_back();
    for(int val : vec){
        cout<<val<<"\t"<<endl;
    }
    cout<<"front val : "<<vec.front()<<endl;
    cout<<"back val : "<< vec.back()<<endl;
}