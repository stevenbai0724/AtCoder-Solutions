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
    string s; cin>>s;

    vector<char>arr1(n+1);
    vector<char>arr2(n+1);
    bool swap = false;

    for(int i=1;i<=n;i++){
        arr1[i] = s[i-1];
    }
    for(int i=n+1;i<=(2*n);i++){
        arr2[i-n] = s[i-1];
    }

    int q; cin>>q;

    while(q--){
        int t, a, b;
        cin>>t>>a>>b;

        if(t==1){
            if(!swap){
                if(a<=n && b<=n){
                    char temp = arr1[a];
                    arr1[a] = arr1[b];
                    arr1[b] = temp;
                }
                else if(a>n && b<=n){
                    char temp = arr2[a-n];
                    arr2[a-n] = arr1[b];
                    arr1[b] = temp;
                }
                else if(a<=n && b>n){
                    char temp = arr1[a];
                    arr1[a] = arr2[b-n];
                    arr2[b-n] = temp;
                }
                else{
                    char temp = arr2[a-n];
                    arr2[a-n] = arr2[b-n];
                    arr2[b-n] = temp;
                }
            }
            else{ //<=n is arr2, >n
                if(a<=n && b<=n){
                    char temp = arr2[a];
                    arr2[a] = arr2[b];
                    arr2[b] = temp;
                }
                else if(a>n && b<=n){
                    char temp = arr1[a-n];
                    arr1[a-n] = arr2[b];
                    arr2[b] = temp;
                }
                else if(a<=n && b>n){
                    char temp = arr2[a];
                    arr2[a] = arr1[b-n];
                    arr1[b-n] = temp;
                }
                else{
                    char temp = arr1[a-n];
                    arr1[a-n] = arr1[b-n];
                    arr1[b-n] = temp;
                }
            }
        }
        else swap = !swap;


    }
    if(!swap){
        for(int i=1;i<=n;i++){
            cout<<arr1[i];
        }
        for(int i=1;i<=n;i++){
            cout<<arr2[i];
        }
    }
    else{
        for(int i=1;i<=n;i++){
            cout<<arr2[i];
        }
        for(int i=1;i<=n;i++){
            cout<<arr1[i];
        }
    }
    cout<<"\n";
    

    return 0;
}