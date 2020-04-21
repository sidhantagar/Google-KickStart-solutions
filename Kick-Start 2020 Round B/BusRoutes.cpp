#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define M 1000000007
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
#define inc(i,a,n) for (ll i=a;i<n;i++)
#define dec(i,a,n) for (ll i=n-1;i>=a;i--)

int main()
{
    boost;
    ll t;
    cin>>t;
    inc(j,0,t)
    {
        ll n,d;
        cin>>n>>d;
        ll arr[n];
        inc(i,0,n)
        {
            cin>>arr[i];
        }
        for(ll i=n-1;i>=0;i--)
        {
            d -=d%arr[i];
        }
        cout<<"Case #"<<j+1<<":"<<" "<<d<<endl;
    }
}