//https://atcoder.jp/contests/abc186/tasks/abc186_b
#include <bits/stdc++.h>
using namespace std;
vector<int>roomCords;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin>>n>>m;
    int ans = 1e9;
    int sum = 0;
    vector<vector<int>>arr(n+1, vector<int>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
            ans = min(ans, arr[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]>ans){
                sum+=arr[i][j]-ans;
            }
        }
    }
    cout<<sum;
    

    return 0;
}