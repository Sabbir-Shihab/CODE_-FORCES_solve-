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
ll n,sum=0;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];

}
for(int i=0;i<n;i++)
{

    sum+=(abs(v[i]));
}
cout<<sum<<endl;

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
