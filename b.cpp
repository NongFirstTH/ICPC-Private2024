#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,r,s,p,score = 0;
    cin >> n >> k;
    cin >> r >> s >> p;
    string T;
    cin >> T;

    for (int i = 0;i<n;i++) {
        if (i >= k && T[i] == T[i-k]) {
            T[i] = 'x';
        } else {
            if(T[i] == 's') score += r; 
            else if(T[i] == 'p') score += s; 
            else if(T[i] == 'r') score += p; 
        }
    }

    cout << score;
    return 0;
}