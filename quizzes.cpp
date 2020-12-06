//https://atcoder.jp/contests/abc184/tasks/abc184_b
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, x;
    string s;
    cin>>n>>x>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='x' && x==0) continue;
        else if(s[i]=='x' && x!=0) x--;
        else x++;
    }
    cout<<x;
    return 0;
}