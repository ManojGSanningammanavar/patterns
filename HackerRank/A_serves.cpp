#include <bits/stdc++.h>
using namespace std;

void serves(int t , vector<pairs<int,int>>& rounds){
    int count =0;
    for(int i =0; i<t;i++){
    int total = rounds[i].first + rounds[i].second;
    int r = total % 4;
    if(r==0 ||r==1){
        count ++;
    }
    }
}
