#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<7;i++){
            int val;
            cin >> val;
            sum+=val;
            maxi=max(maxi,val);
        }
        sum-=maxi;
        cout << maxi-sum << endl;
    }
}