#include<iostream>
using namespace std;
void permutations(string& str,int i){
    if(i>=str.size()){
        cout << str << endl;
        return;
    }
    for(int j=i;j<str.size();j++){
        swap(str[i],str[j]);
        permutations(str,i+1);
        swap(str[i],str[j]);
    }
}
int main(){
    string str="abc";
    permutations(str,0);
    return 0;
}