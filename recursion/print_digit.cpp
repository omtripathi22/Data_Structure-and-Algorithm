#include<iostream>
using namespace std;
void printDigit(int n){
    if(n<=0){
        return;
    }
    int newn=n/10;
    printDigit(newn);
    cout << n%10 << " ";
}
int main(){
    int n;
    cout << "enter the no.:";
    cin >> n ;
    printDigit(n);
    return 0;
}