#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &ans)
{
   int i=0;
   int j=ans.size()-1;
   while (i<=j)
   {
      int temp=ans[i];
      ans[i]=ans[j];
      ans[j]=temp;
      i++;
      j--;
   }
    
}
void factorial( int n)
{
    vector<int>ans;
    ans.push_back(1);
    int carry=0;
    for (int  i = 2; i <= n; i++)
    {
        for (int j = 0; j<ans.size(); j++)
        {
            int x=ans[j]*i+carry;
            ans[j]=x%10;
            carry=x/10;
        }
        while (carry)
        {
            ans.push_back(carry%10);
            carry=carry/10;
        }
       
    }
    reverseArray(ans);
   for (int e: ans)
        {
            cout << e <<" ";
        }
    
    
}
int main()
{
    int n;
    cout <<"enter the the you want to take factorial:";
    cin >> n;
    cout << endl;
    factorial(n);
}