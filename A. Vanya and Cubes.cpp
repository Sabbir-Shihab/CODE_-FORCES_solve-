#include<bits/stdc++.h>
typedef long long ll;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fs(lcv,hi) for(int lcv=0;lcv<hi;lcv++)
#define fb(lcv,hi) for(int lcv=hi; lcv>=0;lcv--)
using namespace std;

int main()
{
//code here
int n;
cin>>n;
int hight=0;
int sum= 0;
for(int i=1;n>0;i++){
    sum=i+sum;
    if(n-sum>=0) hight++;
        n-=sum;
}


    cout<<hight<<endl;
    return 0;



}

//int main() {

/*ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 //int t;
 //cin>>t;
 //while(t--)
{
  Tests();
 }

return 0;
}*/
