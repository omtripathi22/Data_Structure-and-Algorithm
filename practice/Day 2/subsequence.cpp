#include<bits\stdc++.h>
using namespace std;

void findSub(string str,string ans,int idx){
    if(idx==str.size()){
        cout << ans << endl;
        return;
    }
    //take char
    findSub(str,ans+str[idx],idx+1);

    //skip char
    findSub(str,ans,idx+1);
}

int main(){
    string str;
    cin >> str;
    findSub(str,"",0);
}