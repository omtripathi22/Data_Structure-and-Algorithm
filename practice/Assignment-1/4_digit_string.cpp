#include<bits\stdc++.h>
using namespace std;

//recusive function for checking digits in string
bool containsNum(string str,int idx){
    //base case
    if(idx==str.size()){
        return true;
    }
    char ch=str[idx++];
    //recursive call
    return (isdigit(ch) && containsNum(str,idx));
}

int main(){
    string str;
    cout << "enter the string:";
    cin >> str;
    cout << containsNum(str,0);
    return 0;
}