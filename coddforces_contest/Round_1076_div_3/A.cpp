#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,x;
        cin >> n >> s >> x;
        vector<int>arr;
        int sum=0;
        for(int i=0;i<n;i++){
            int num;
            cin >> num;
            sum+=num;
        }
        
        if(sum>s){
            cout << "NO" << endl;
        }
        else if((s-sum)%x==0){
            cout <<"YES" << endl; ;
        }
        else{
            cout << "NO" << endl;
        }
    }
}