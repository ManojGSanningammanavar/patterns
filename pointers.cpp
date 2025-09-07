#include <iostream>
using namespace std;

void change(int* a){//pass by reference using pointers
    *a=20;
}
int main(){
    // int a = 20  ;
    // int* ptr=&a;
    // int** ptr2=&ptr;

    // cout<<**(ptr2)<<endl;
    // cout<<ptr<<endl;

    // cout<<&a<<endl;
    // cout<<ptr<<endl;

    int a = 10;
    change(&a);
    cout<<"the a in main function "<<a<<endl;

}