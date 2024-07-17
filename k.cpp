#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

long long findTime(int n, int t[], vector<vector<int>> &a, vector<long long> time){
    cout << n << "------" << t[n] << endl;
    if (n<0) return 0;
    if (time[n] != -1) {
        cout << n << " = > " << time[n] << endl;
        return time[n];
    }
    cout<<"x\n";
    if (a[n][0]==0) {
        cout << n << " = > " << t[n] << endl;
        return t[n];
    }
    cout<<"x\n";
    long long  tt = t[n];

    for (int i = 0 ; i< a[n].size();i++) {
        tt += findTime(a[n][i]-1, t, a, time);
    }
    cout << n << " = > " << tt << endl;

    time[n] = tt;
    return time[n];
}

int main() {
    int n;
    cin >> n;
    int t[n];
    vector<vector<int>> a(n);
    vector<long long> time(n, -1);

    for (int i=0; i<n; i++) {
        int k;
        cin >> t[i] >> k;
        for (int i=0;i<k;i++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    time[0] = t[0];
    cout << findTime(n-1,t,a,time);

    return 0;
}