#include<iostream>
using namespace std;

int fibo(int n,int a,int b){
    if(n==0 || n==1){
        return b;
    }
    
    return fibo(n-1,b,a+b);
}

int main(){
    int n;
    cin >> n;
    
    cout << fibo(n,0,1) << endl;
    return 0;
}