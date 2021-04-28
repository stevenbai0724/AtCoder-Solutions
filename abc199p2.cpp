//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <cmath>    
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define string std::string
const int mod = 1e9 + 7;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n; cin>>n;

    vector<int>a(n+1);
    vector<int>b(n+1);

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    int mx = 0;
    int mn = 1e18;

    for(int i=1;i<=n;i++){
        mx = max(mx, a[i]);
        mn = min(mn, b[i]);
    }
    if(mn<mx){
        cout<<0<<"\n";
        return 0;
    }
    cout<<(mn-mx+1)<<"\n";


  

    return 0;
}