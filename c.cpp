#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<pair<int,int>> result;
    for (int round = 0;round < t;round++) {
    int n,m;
    cin >> n >> m;
        vector<pair<int,int>> v;
        for (int i = 0;i<n;i++) {
            string s;
            cin >> s;
            int j = 0;
            for (char c: s) {
                if (c == '#') {
                    v.push_back(make_pair(i+1,j+1));
                }
                j++;
            }
        }

        result.push_back(v[v.size()/2]);
    }

    for (int i=0;i<result.size();i++) {
        cout << result[i].first << ' ' << result[i].second << endl;
    }
    return 0;
}