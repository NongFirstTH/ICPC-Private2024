#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

void move(int dir, pair<int,int> & p) {
    if (dir == 0) {
        p.first+=1;
    } else if (dir == 1) {    
        p.second+=1;
    } else if (dir == 2) {
        p.first-=1;
    } else if (dir == 3) {
        p.second-=1;
    }
}

int main() {
    string s;
    int x, y , dir = 0;
    cin >> s;
    cin >> x >> y;
    int rx = 0, ry = 0;
    pair<int,int> r(rx, ry);

    for (char c : s) {
        if (c == 'F') {
            move(dir,r);
        } else {
            int tempA = (dir+1)%4;
            int tempB = (dir-1)%4;
            pair<int,int> r_A(r.first,r.second);
            move(tempA, r_A);  
            
            pair<int,int> r_B(r.first,r.second);
            move(tempB, r_B);  

            if (abs(x - r_A.first)+ abs(y - r_B.second) < abs(x - r_A.first)+ abs(y - r_B.second)) {
                dir = tempA;
                r = r_A;
            } else {
                dir = tempB;
                r = r_B;
            }
        }
    }

    if (r.first == x && r.second == y) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}