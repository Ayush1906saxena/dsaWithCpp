// Example 1:
//     Input: s = "codingminutes"
//     Output: 0

// Example 2:
//     Input: s = "aabb"
//     Output: -1

#include <bits/stdc++.h>
#define ayush
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> map;
    for(int i = 0; i < s.size(); i++){
        if(map.count(s[i]) != 0)
            map.erase(s[i]);
        else map[s[i]] = i;
    }

    int minIdx = INT_MAX;
    for(auto x : map){
        minIdx = min(minIdx, map[x.first]);
    }

    return minIdx == INT_MAX ? -1 : minIdx;
}

int main(){
    
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    cout<<firstUniqChar("codingminutes");
}