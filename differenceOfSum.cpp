//https://atcoder.jp/contests/abc186/tasks/abc186_d
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    vector<int>arr(n);
    vector<int>psa(n);
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        sum+=arr[i];
        psa[i] = sum;
    }

    for(int i=0;i<n;i++){
        ans += (psa[n-1]-psa[i]) - (arr[i]*(n-i-1));
    }
    cout<<ans;
    return 0;
}