#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,x,y;
    cin >> n;
    cin >> x;
    cin >> y;
    long long red[n];
    long long blue[n];

    blue[0] = 1;
    red[0] = 0;
    for (int i = 1;i < n;i++) {
        blue[i] = red[i-1]+ y * blue[i-1];
        red[i] = red[i-1]+ x * blue[i];
    }

    cout << red[n-1];
    return 0;
}