#include<bits\stdc++.h>
using namespace std;

int pow(int x,int n){
    if(n==1){
        return x;
    }
    int num=pow(x,n/2);
    return (n%2==0)?num*num:num*num*x;
}

int main(){
    int x,n;
    cin >> x >> n;
    cout << pow(x,n);
}