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
    if(n>=1900) cout<<"Division 1"<<endl;
    if(1600<=n&& n<=1899) cout<<"Division 2"<<endl;
    if(1400<=n&&n<=1599) cout<<"Division 3"<<endl;
    if(n<=1399) cout<<"Division 4"<<endl;
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

