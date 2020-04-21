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
        ll ne,n,p,c,temp,ans=0;
        cin>>ne;
        cin>>p;
        cin>>c;
        inc(i,0,ne-2)
        {
            cin>>n;
            if(c>p&&n<c)
            ans++;
            p=c;
            c=n;
        }
        cout<<"Case #"<<j+1<<":"<<" "<<ans<<endl;
    }
}