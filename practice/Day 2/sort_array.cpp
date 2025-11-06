#include <bits\stdc++.h>
using namespace std;

void insert(vector<int> &arr, int num)
{
    if (arr.size() == 0)
    {
        arr.push_back(num);
        return;
    }
    if (arr.back() < num)
    {
        arr.push_back(num);
        return;
    }
    int val = arr.back();
    arr.pop_back();
    insert(arr, num);
    arr.push_back(val);
}

void sort(vector<int> &arr)
{
    if (arr.size() == 1)
    {
        return;
    }
    int num = arr.back();
    arr.pop_back();
    // cout << num ;
    sort(arr);
    insert(arr, num);
}

int main()
{

    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr);
    cout << "array after sort:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}