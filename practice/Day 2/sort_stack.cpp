#include<bits\stdc++.h>
using namespace std;

void insert(stack<int>&st,int num){
    if(st.empty()){
        st.push(num);
        return;
    }
    if(st.top()<=num){
        st.push(num);
        return;
    }
    int val=st.top();
    st.pop();
    insert(st,num);
    st.push(val);
}

void sort(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int num=st.top();
    st.pop();
    sort(st);
    insert(st,num);
}

int main(){
    int n;
    cin >> n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int data;
        cin >> data;
        st.push(data);
    }
    sort(st);
    for(int i=0;i<n;i++){
        cout << st.top() <<" ";
        st.pop();
    }
}