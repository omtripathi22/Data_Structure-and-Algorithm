#include<bits\stdc++.h>
using namespace std;

void countZero(int num,int& count){
    if(num==0){
        return;
    }
    int digit=num%10;
    (digit==0)?count++:count;
    countZero(num/10,count);
}

int main(){
    int num;
    cin >> num;
    int count=0;
    countZero(num,count);
    cout << count;
    return 0;
}