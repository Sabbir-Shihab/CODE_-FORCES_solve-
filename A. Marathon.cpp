#include<bits/stdc++.h>
using namespace std;

void solve()
{
//code here
    int tc;
    cin>>tc;
    while(tc--){
    int a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;

    cout<<(a<b? 1:0)+(a<c?1:0)+(a<d?1:0)<<endl;


}
}

int main() {

ios::sync_with_stdio(false);
cin.tie(NULL);

solve();

return 0;
}

