//https://atcoder.jp/contests/abc186/tasks/abc186_c
#include <bits/stdc++.h>
using namespace std;

bool digits10(int x){
    while(x>0){
        if(x%10==7) return true;
        x/=10;
    }
    return false;
}   
bool digits8(int x){
    while(x>0){
        if(x%8==7)return true;
        x/=8;
    }
    return false;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    set<int>s;

    for(int i =1;i<=n;i++){
        if(digits10(i)) s.insert(i);
    }
    for(int i=1;i<=n;i++){
        if(digits8(i)) s.insert(i);
    }
    cout<<n- s.size();
    return 0;
}