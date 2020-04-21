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
    ll mod = 1000000000;
    ll t;
    cin>>t;
    inc(j,0,t)
    {
        vector <ll> mul;
        mul.pb(1);
        vector <ll>::iterator it;
        ll tmul=1,val = -1,temp,w=1,h=1;
        string s;
        cin>>s;
        for(ll i=0;i<s.length();i++)
        {
            char ch = s[i]; 
            if(ch>=48&&ch<=57)
            {
                if(val==-1)
                val = 0;
                val = val*10+(ch-'0');
            }
            if(ch==40)
            {
                if(val==-1)
                val =1;
                tmul *= val;
                tmul %= mod; 
                mul.pb(tmul);
                val = -1;
            }
            if(ch==41)
            {
                mul.pop_back();
                it = mul.end();
                tmul = (*(it-1));
            }
            if(ch == 'S')
            {
                h += tmul;
                h %= mod;
            }
            if(ch == 'N')
            {
                temp = tmul%mod;
                temp = mod -temp;
                h+=temp;
                h%=mod;
            }
            if(ch == 'E')
            {
                w+= tmul;
                w %= mod;
            }
            if(ch == 'W')
            {
                temp = tmul%mod;
                temp = mod -temp;
                w+=temp;
                w%=mod;
            }
            if(w==0)
            w=mod;
            if(h==0)
            h= mod;
            //cout<<w<<" "<<h<<" "<<tmul<<endl;
        }       
        std::cout<<"Case #"<<j+1<<":"<<" "<<w<<" "<<h<<endl;
    }
}