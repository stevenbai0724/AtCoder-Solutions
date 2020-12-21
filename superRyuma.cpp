//https://atcoder.jp/contests/abc184/tasks/abc184_c
#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
int check(void){
    if(a==c && b==d)return 0;
    if(a+b==c+d || a-b==c-d ||abs(a-c)+abs(b-d)<=3) return 1;
    if((a+b+c+d)%2==0 ||abs(a-c)+abs(b-d)<=6||abs((a+b)-(c+d))<=3||abs((a-b)-(c-d))<=3)return 2;

    return 3;

}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    cin>>a>>b>>c>>d;
    
    cout<<check();

    return 0;
}