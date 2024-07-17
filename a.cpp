#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n, c, d;
        cin >> n >> c >> d;
        
        vector<long long> b;
        string text_line;
        getline(cin, text_line);
        getline(cin, text_line);
        istringstream input_stream(text_line);
        int value;
        long long count = 0;
        while (input_stream >> value && count <= n*n)
        {
            count++;
            b.push_back(value);
        }

        if (count != n*n) {
            cout << "no" << endl;
            continue;
        }
        
        sort(b.begin(), b.end());

        vector<long long> a;

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i == 0) {
                    if (j == 0) {
                        a.push_back(b[0]);
                    } else {
                        a.push_back(a[j-1]+c);
                    }
                } else {
                    a.push_back(a[(i-1)*n+j]+d);
                }
            }
        }

        sort(a.begin(), a.end());

        bool result = true;

        for (int i=0; i<a.size() && result; i++) {
            if(a[i] != b[i]) {
                result = false;
            }
        }

        if (result) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }

    }

    return 0;
}