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
        ll a[n];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        if(a[1]!=a[0] && a[0]==a[2])
            cout<<2<<endl;
        else
        {
            for(ll i=0; i<n; i++)
            {
                if(a[1]!=a[i])
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
