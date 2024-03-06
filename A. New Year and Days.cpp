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
string s1,s2;
cin>>n>>s1>>s2;
if(s2=="week")
{
    if(n==5||n==6)
    {
        cout<<"53"<<endl;
    }
    else
        cout<<"52"<<endl;
}
else
   {
       if(n<30)
        cout<<"12"<<endl;
       else if(n==30)
        cout<<"11"<<endl;
       else
        cout<<"7"<<endl;
   }
}

int main() {

ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 /*int t;
 cin>>t;
 while(t--)
{*/
  Tests();
 //}

return 0;
}

