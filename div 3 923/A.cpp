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

int a=0,b=0;
fs(i,n)
{
    if(str[i]=='B'){
        a=i;
        break;
    }
}
 for(int i=n-1;i>=0;i--){
    if(str[i]=='B'){
        b=i;
    }
}

cout<<b-a+1<<endl;




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
