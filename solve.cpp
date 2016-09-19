#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define RFOR(i,a,b) for(i=a;i>=b;i--)
#define vll vector<ll>
#define cc 1000000007
using namespace std;
int main() {
     freopen("input.in", "r", stdin);
     freopen("output.out","w",stdout);
    ll a[1001],t,i,j,k,n,m,c;
    cin>>t;
    string s;
    FOR(j,1,t)
    {
        cin>>n;
        vll p(n),q(n);
        FOR(i,0,n-1)
        {
            cin>>p[i];
        }
        FOR(i,0,n-1)
            cin>>q[i];
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        c=0;
        FOR(i,0,n-1)
        {
            c+=p[i]*q[n-1-i];
        }
        cout<<"Case #"<<j<<": "<<c<<endl;
    }
	return 0;
}

