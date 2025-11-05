#include<bits\stdc++.h>
using namespace std;

int reverse(int num,int& k){
    if(num<10){
        k=k*10;
        return num;
    }
    int digit=num%10;
    int n=  reverse(num/10,k)+digit*k;
    k=k*10;
    return n;
}

int main(){
    int num;
    cin >> num;
    int k=1;
    cout << reverse(num,k);
    return 0;
}