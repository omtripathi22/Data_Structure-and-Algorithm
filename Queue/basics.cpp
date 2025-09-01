#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int* arr;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int value){
        if(front==0 && rear==size-1){
            cout << "Queue is full" <<endl;
            return;
        }
        else if(rear==-1){
            front=rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
    }
    void pop(){
        if(front==-1){
            cout <<"Queue is empty"<<endl;
            return;
        }
        else if(front==rear){
            cout<<"Item poped is:" << arr[front] <<endl;
            front=-1;
            rear=-1;
        }
        else{
            cout<<"Item poped is:" << arr[front] <<endl;
            front++;
        }
    }
    void getFront(){
        if(front==-1){
            cout << "Queue is empty :" << endl;
        }
        else{
            cout << arr[front] << endl;
        }
    }
};

int main(){
    Queue q(10);
    q.push(8);
    q.push(3);
    q.getFront();
    q.pop();
    q.getFront();
    q.push(7);
    q.push(5);
    q.pop();
    q.getFront();
    q.pop();
    q.getFront();
}