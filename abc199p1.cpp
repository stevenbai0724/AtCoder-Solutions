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
    
    int a, b, c;
    cin>>a>>b>>c;

    if((a*a)+(b*b)<(c*c)){
        cout<<"Yes\n";
    }
    else cout<<"No\n";

  

    return 0;
}