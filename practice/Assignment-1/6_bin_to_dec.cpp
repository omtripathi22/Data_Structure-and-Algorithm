#include<bits\stdc++.h>
using namespace std;

int convert(int num){
    if(num==1 || num==0){
        return num;
    }
    if(num%2==0){
        return convert(num/2)*10 +0;
    }
    else{
        return convert(num/2)*10 +1;
    }
}

int main(){
    int num;
    cin >> num;
    cout << convert(num);
}