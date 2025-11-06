#include<bits\stdc++.h>
using namespace std;

class Solution {
    int count;

public:
    //Function to calculate all permutation of a sequence
    void permuteHelper(set<string>& st, string& temp, int start){
        //base case
        if(start==temp.size()){
             if (!st.count(temp)) {
                st.insert(temp);
                count++;
            }
            return;
        }

        for(int i=start;i<temp.size();i++){
            swap(temp[i],temp[start]);
            permuteHelper(st,temp,start+1);
            swap(temp[i],temp[start]);  //backtrack
        }
    }

    //fuction to calculate sequence
    void helper(string& tiles, set<string>& st, string& temp, int idx) {
        //base case
        if (idx == tiles.size()) {
            if (!st.count(temp)) {
                st.insert(temp);
                permuteHelper(st,temp,0);
                count++;
            }
            return;
        }

        // skip
        helper(tiles, st, temp, idx + 1);

        // take
        temp += tiles[idx];
        helper(tiles, st, temp, idx + 1);
        temp.pop_back();
    }
    int numTilePossibilities(string tiles) {
        count = 0;
        set<string> st;
        string temp = "";
        st.insert("");
        helper(tiles, st, temp, 0);
        return count;
    }
};