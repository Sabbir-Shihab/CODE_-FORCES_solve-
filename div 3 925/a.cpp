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
        cin >> n;


        for (char first = 'a'; first <= 'z'; ++first) {
            for (char second = 'a'; second <= 'z'; ++second) {
                for (char third = 'a'; third <= 'z'; ++third) {

                    int encoded_value = (first - 'a' + 1) + (second - 'a' + 1) + (third - 'a' + 1);


                    if (encoded_value == n) {

                        cout << first << second << third << endl;

                    }
                }
            }
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

