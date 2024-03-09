#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string pos;
        cin>>pos;
        string str="abcdefgh";
        for(int i=1;i<=8;i++)
        {
          if(pos[1]-'0'!=i)
            cout<<pos[0]<<i<<endl;
        }
        for(int i=0;i<8;i++)
            if(pos[0]!=str[i])
        {
            cout<<str[i]<<pos[1]<<endl;
        }
    }
}
