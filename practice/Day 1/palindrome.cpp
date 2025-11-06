#include<iostream>
using namespace std;

bool palindrome(string str,int low,int high){
    if(low>=high){
        return true;
    }
    return (palindrome(str,low+1,high-1) && (str[low]==str[high]));
}

int main(){
    string str;
    cin >> str;
    cout << palindrome(str,0,str.size()-1);
}