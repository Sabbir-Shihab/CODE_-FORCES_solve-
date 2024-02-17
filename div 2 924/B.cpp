#include<bits/stdc++.h>
typedef long long ll;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fs(lcv,hi) for(int lcv=0;lcv<hi;lcv++)
#define fb(lcv,hi) for(int lcv=hi; lcv>=0;lcv--)
using namespace std;

ll maxfreq(vector<ll>& v,ll l,ll r,ll x)
{
    ll ans=-1;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        if(v[m]==x)
            return m;
        if(v[m]<x)
        {
            ans=m;
            l=m+1;

        }
        else{
                r=m-1;

        }
        return ans;
    }
}

void Tests()
{
ll n;
cin>>n;
vector<ll>v;

unordered_map<ll,ll>mp;
fs(i,n)
{
    ll x;
    cin>>x;
    if(mp.find(x)==mp.end())
        v.push_back(x);
        mp[x]++;

}
sort(v.begin(),v.end());
ll m=v.size(),ans=1;
//mp.clear();
  ll k= maxfreq(v,0,m-1,v[0]+n-1);
  k++;
  if(k>ans)
    ans=k;
for( ll i=0;i<m&&k<m;i++)
{
    while(k<m&&v[k]<=v[i]+n-1)
        k++;
    if(k-i>ans)
        ans=k-i;
}
cout<<ans<<endl;


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

