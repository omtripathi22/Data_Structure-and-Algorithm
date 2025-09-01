#include<iostream>
using namespace std;
int lastOccurence(string &str, char& ch,int& i){
    if(i<0){
        return -1;
    }
    if(str[i]==ch){
        return i;
    }
    i--;
    lastOccurence(str,ch,i);
}
int main(){
    string str="acdabgagdfakjg";
    char ch='a';
    int i=str.size()-1;
    int index=lastOccurence(str,ch,i);
    cout << index << endl;
}