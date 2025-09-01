#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums{2,0,2,1,1,0};
    // int zeroes=0,ones=0,two=0; 
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i]==0)
    //     {
    //         zeroes++;
    //     }
    //     if (nums[i]==1)
    //     {
    //         ones++;
    //     }
    //     if (nums[i]==2)
    //     {
    //         two++;
    //     }
        
    // }
    // int i=0;
    // while (zeroes!=0)
    // {
    //     nums[i]=0;
    //     i++;
    //     zeroes--;
    // }
    // while (ones!=0)
    // {
    //     nums[i]=1;
    //     i++;
    //     ones--;
    // }
    // while (two!=0)
    // {
    //     nums[i]=2;
    //     i++;
    //     two--;
    // }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] <<" ";
    // }


    /*another method*/
    
    int l=0,m=0,h=nums.size()-1;
    while (m<=h)
    {
        if (nums[m]==0)
        {
            swap(nums[m],nums[l]);
            l++;
            m++;
        }
        else if (nums[m]==1)
        {
            m++;
        }
        else
        {
            swap(nums[m],nums[h]);
            h--;
        }
    }
       for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] <<" ";
    }
    
}