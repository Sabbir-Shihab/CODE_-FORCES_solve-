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
int a[1000] , b[1000];
    int n;
    cin >> n;
    int count = 0;

    fs(i,n){
        cin >> a[i] >> b[i];
    }

    fs(i,n){
        fs(j,n){
            if(a[i] == b[j]){
                count++;
            }
        }
    }

    cout<< count << endl;


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
 }*/
 Tests();

return 0;
}

