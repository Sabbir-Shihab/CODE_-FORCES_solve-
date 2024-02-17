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
ll a,b;
cin>>a>>b;
if(a%2!=0&& b%2 !=0 ||(a%2 !=0&&b/2==a)|| b%2!=0&& a/2==b||(a==1&& b==1))
{
    no
}
else yes


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
