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
vector<int> v(100005);
vector<int> p (100005);
void solve(){
    int n ; cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i<=n;i++) cin >> a[i];
    int m ; cin >> m;
    vector<int> q(m+1);
    for(int i =1 ; i<=m ;i++) cin >> q[i];	
    	
    for(int i = 1, j= n; i<=n, j>=1;i++,j--){
    	v[a[i]] = i;
    	p[a[i]] = j;
    	
    } 	
    int s = 0 , s1 = 0;
    for(int i = 1 ;i<=m;i++){
    	s += v[q[i]];
    	s1 += p[q[i]];
    }
    cout << s << " " << s1 ;
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