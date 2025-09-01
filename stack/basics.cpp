#include<iostream>
using namespace std;
class Stack{
    private:
    int *arr;
    int size;
    int top;
    public:
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    int push(int data){
        if(top==size-1){
           cout << "Stzck overflow" << endl;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    int pop(){
        if(top==-1){
            cout << "Stack underflow" << endl;
        }
        else{
            cout <<"element poped is:"<< arr[top] << endl;
            top--;
        }
    }
    int getTop(){
        if(top==-1){
            cout <<"Stack is empty"<<endl;
        }
        else{
            cout <<"top element is:" << arr[top] << endl;
        }
    }
};
int main(){
    Stack s(10);
    s.push(5);
    s.push(8);
    s.getTop();
    s.pop();
    s.getTop();
}