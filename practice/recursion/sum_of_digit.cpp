#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    int digit=n%10;
    return digit+sum(n/10);
}
int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
    
}