#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//Lungiman
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test;
    cin >> test;

    while(test--)
    {
        ll n;
        cin>>n;
        string s[n];
        ll k=0;
        ll p[4];

        for(ll i=0; i<n; i++)
        {
            cin >> s[i];
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(s[i][j]=='*')
                   {
                       p[k]=i;
                       p[k+1]=j;
                       k+=2;
                   }
                   if(k>2)
                    break;
            }
            if(k>2)
                break;
        }
        if(p[0]!=p[2] && p[1]!=p[3])
        {
            s[p[0]][p[3]]='*';
            s[p[2]][p[1]]='*';
        }
        else if(p[0]==p[2])
        {
            if(p[0]==0)
            {
                s[p[0]+1][p[1]]='*';
                s[p[2]+1][p[3]]='*';
            }
            else
            {
                s[p[0]-1][p[1]]='*';
                s[p[2]-1][p[3]]='*';
            }
        }
        else if(p[1]==p[3])
        {
           if(p[1]==0)
            {
                s[p[0]][p[1]+1]='*';
                s[p[2]][p[3]+1]='*';
            }
            else
            {
                s[p[0]][p[1]-1]='*';
                s[p[2]][p[3]-1]='*';
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout << s[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
