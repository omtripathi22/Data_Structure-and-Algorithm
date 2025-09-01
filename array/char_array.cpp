#include<iostream>
using namespace std;
int main()
{
    char name[100];
    cout << "enter your name:";
    // cin >> name;
    // cout << "your name is:" << name << endl;
    cin.getline(name,100);
    cout << "your name is:" << name << endl;
}