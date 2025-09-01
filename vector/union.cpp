#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>a{1,2,3,4};
    vector<int>b{5,6,7,8};
    vector<int>c;
    for (int i = 0; i <a.size(); i++)
    {
        c.push_back(a[i]);
    }
    for (int i = 0; i <b.size(); i++)
    {
        c.push_back(b[i]);
    }
    for (int i = 0; i <c.size(); i++)
    {
        cout << c[i] << endl;
    }
    
}