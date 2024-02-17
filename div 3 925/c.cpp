#include<bits/stdc++.h>
typedef long long ll;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fs(lcv,hi) for(int lcv=0;lcv<hi;lcv++)
#define fb(lcv,hi) for(int lcv=hi; lcv>=0;lcv--)
using namespace std;

void Tests()
{
//code here
ll n;
cin>>n;
vector<ll>v(n);
unordered_map<ll,ll>mp;
fs(i,n)
{
    cin>>v[i];
    mp[v[i]]++;
}
ll pre=1,suff=1;
for(int i=1;i<n;i++)
{
    if(v[i-1]==v[i])
        pre++;
        else
            break;
}
for(int i=n-2;i>=0;i--)
{
    if(v[i]==v[i+1])
    {
        suff++;
        }
        else
            break;


  // cout<<pre<<" "<<suff<<endl;
    if(pre==n){
        cout<<0<<endl;
        return;
    }
    else if (v[0]==v[n-1])
    {
        cout<<n-(pre+suff)<<endl;
        return;
    }
}

}

int main() {

ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 int t;
 cin>>t;
 while(t--)
{
  Tests();
 }

return 0;
}
