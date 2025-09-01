#include<iostream>
using namespace std;
void reverseString(string& str,int start,int end){
    if(start>end){
        return ;
    }
    swap(str[start],str[end]);
    start++;
    end--;
    reverseString(str,start,end);
}
int main(){
    string str="abcdefgh";
    int start=0;
    int end=str.size()-1;
    reverseString(str,start,end);
    cout << str ;
}