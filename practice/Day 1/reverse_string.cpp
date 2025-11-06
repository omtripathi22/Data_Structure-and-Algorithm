#include<bits\stdc++.h>
using namespace std;

string reverse(string str,int idx){
    if(idx==str.size()){
        return "";
    }
    char ch=str[idx];
    idx++;
    return reverse(str,idx)+ch;
}

int main(){
    string str;
    cin >> str;
    cout << reverse(str,0) << endl;
}