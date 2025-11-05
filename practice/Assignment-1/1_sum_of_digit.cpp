#include<iostream>
using namespace std;

//function to calculate sum using recursion
int sum(int n){
    //base case
    if(n==0){
        return 0;
    }
    int digit=n%10;
    //recursive call
    return digit+sum(n/10);
}
int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
    
}