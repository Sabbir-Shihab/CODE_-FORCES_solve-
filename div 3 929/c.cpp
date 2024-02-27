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
ll a,b,l;
ll temp=0;
cin>>a>>b>>l;
ll ta=a,tb=b;
ll x=1,y=1;
while(a<l)
{
    if(l%a==0)
    {
        x++;
    }
    else{
        break;
        a=a*ta;
    }
    while(b<l)
    {
        if(l%b==0)
            y++;
        else
            break;
        b=b*tb;
    }
  set<ll>s;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            temp=pow(a,i)*pow(tb,j);

            if(temp<=l && l%temp==0)
               s.insert(l/temp);

        }


    }
cout<<b<<endl;

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

