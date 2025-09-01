#include<iostream>
#include<vector>
using namespace std;
 int maximumSwap(int num) {
        vector<int> ans;
        int digit;
        while (num > 0) {
            digit = num % 10;
            ans.push_back(digit);
            num = num / 10;
        }
        int index=0;
        int max=ans[0];
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] > max) {
                index=i;
            }
        }
        int temp=ans[index];
        ans[index]=ans[ans.size()-1];
        ans[ans.size()-1]=temp;
        num = 0;
        for (int i = ans.size() - 1; i >= 0; i--) {
            num = num * 10 + ans[i];
        }
        return num;
    }
    int main(){
        int num=2736;
        int ans=maximumSwap(num);
        cout << ans;
    }