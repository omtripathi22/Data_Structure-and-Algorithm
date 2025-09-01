#include<iostream>
using namespace std;
int climbStair(int n){
    if(n==0)return 1;
    if(n==1)return 1;
    int ans=climbStair(n-1)+climbStair(n-2);
    return ans;
}
int main(){
    int n;
    cout << " enter the no. of stair you want to climb"<< endl;
    cin >> n;
    int ans=climbStair(n); 
    cout << "no. of ways are: "<< ans << endl;
}