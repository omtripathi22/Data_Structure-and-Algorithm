#include<iostream>
using namespace std;

void print(int n,int num){
    if(num==n){
        cout << n << endl;
        return;
    }
    cout << num << endl;
    print(n,num+1);
}

int main(){
    int n;
    cin>>n;
    print(n,1);
    return 0;
}