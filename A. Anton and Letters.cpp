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
string s;
set<char>a;
getline(cin,s);
for(int i=0;i<s.length();i++)
{
    if(s[i]>='a'&& s[i]<='z')
        a.insert(s[i]);
}
cout<<a.size()<<endl;

}

int main() {

ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 /*int t;
 cin>>t;
 while(t--)
{
  Tests();
 }
*/
Tests();
return 0;
}

