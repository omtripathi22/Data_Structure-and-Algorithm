#include<bits\stdc++.h>
using namespace std;

int times(vector<int>&dice,int score){
    if(score==0){
        return 0;
    }
    if(score<0){
        return INT_MAX;
    }
    int ans=INT_MAX;
    for(int i=0;i<dice.size();i++){
        ans=min(ans,times(dice,score-dice[i]));
        if(ans!=INT_MAX){
            break;
        }
    }
    
    return (ans==INT_MAX)?INT_MAX:ans+1;
}

int main(){
    int n;
    cin >> n;
    vector<int>queries(n);
    for(int i=0;i<n;i++){
        cin >> queries[i];
    }
    vector<int>dice={7,6,5,4,3,2};
    for(int i=0;i<n;i++){
        cout << times(dice,queries[i]) << endl;
    }
    //cout << "hii";
    return 0;
}