#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    arr.push_back(5);
    arr.push_back(9);
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    arr.pop_back();
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}