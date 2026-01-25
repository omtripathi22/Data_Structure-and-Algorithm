#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            int maxi = arr[i];
            int pos = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= maxi) {
                    maxi = arr[j];
                    pos = j;
                }
            }

            if (maxi > arr[i]) {
                reverse(arr.begin() + i, arr.begin() + pos + 1);
                break;
            }
        }

        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}