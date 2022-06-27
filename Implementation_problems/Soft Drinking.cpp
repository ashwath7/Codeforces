#include<bits/stdc++.h>
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n,k,l,c,d,p,nl,np , a , b,q,s,ans ; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector<int> arr;
    a = k*l;
    b = a/nl;
    q = c*d;
    s = p/np;
    arr.pb(a);
    arr.pb(b);
    arr.pb(q);
    arr.pb(s);
    ans = *min_element(arr.begin() , arr.end());
    cout << ans/n;
}
signed main(){
    ios
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}