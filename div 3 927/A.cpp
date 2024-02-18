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
int n;
cin>>n;
string str;
cin>>str;

int counts=-1;
for(int i=1;i<n;i++)
{
    if(str[i-1]==str[i]&&str[i]=='*')
    {
        counts=i;
        break;
    }


}
if(counts==-1)
    counts=n;
int ans=0;
for(int i=0;i<counts;i++)
    if(str[i]=='@')
    ans++;
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

