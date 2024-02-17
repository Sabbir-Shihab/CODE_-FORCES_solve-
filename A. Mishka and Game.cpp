#include<bits/stdc++.h>
typedef long long ll;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fs(lcv,hi) for(int lcv=0;lcv<hi;lcv++)
#define fb(lcv,hi) for(int lcv=hi; lcv>=0;lcv--)
using namespace std;
/*
void Tests()
{
//code here



int main() {*/

/*ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);*/
int main()
{


 int t;
  int cm=0,cc=0;
 cin>>t;
 while(t--)
{



int m,c;
cin>>m>>c;
if(m>c) cm++;

else if(m<c) cc++;

}
 if(cm>cc)
{
    cout<<"Mishka"<<endl;
}
else if (cc>cm) {
    cout<<"Chris"<<endl;
}
else cout<<"Friendship is magic!^^"<<endl;
return 0;
}




