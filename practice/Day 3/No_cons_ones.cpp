#include <bits\stdc++.h>
using namespace std;

void solve(vector<string> &res, string ans, int idx)
{
    if (idx == ans.size())
    {
        cout << ans << " ";
        res.push_back(ans);
        return;
    }

    // teke 0
    solve(res, ans, idx + 1);

    // take 1
    if (idx>0 && ans[idx - 1] == '1')
    {
        return;
    }
    ans[idx] = '1';
    solve(res, ans, idx + 1);
}

int main()
{
    int n;
    cin >> n;
    string ans = "";
    vector<string> res;
    for (int i = 0; i < n; i++)
    {
        ans += '0';
    }
    solve(res, ans, 0);
}