#include<iostream>
using namespace std;
bool palindrome(string str,int start, int end){
    if(start>end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    start++;
    end--;
    palindrome(str,start,end);
}
int main(){
    string str;
    cout << "enter the string :";
    cin >> str;
    string ans="";
    if(palindrome(str,0,str.size()-1)){
        cout << "String is palindrome"<< endl;
    }
    else{
         cout << "String is not palindrome"<< endl;
    }
}