
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n;
    long long l;
    cin >> n;
    cin >> l;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    long double m=0;
    for (int i = 0; i < n-1; i++)
    {
        if(m < a[i+1]-a[i])
            m = 1.0*a[i+1]-a[i];
    }
    long double ans = m/2;
    if(ans < a[0])
        ans = a[0];
    if(ans < l-a[n-1])
        ans = l-a[n-1];
    cout <<fixed<< setprecision(10) << ans;
    
    return 0;
}