#include<bits/stdc++.h>
// #define int         int64_t
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
    long long int n , k ; 
    scanf("%I64d",&n);
    scanf("%I64d",&k);
    
    long long e,o;
    if(n&1) {
    	 o = (n/2) + 1;
    	 e = n - o;
    }
    else {
    	o = n/2;
    	e = n - o ; 
    }
    if(k > e) {
    	printf("%I64d" ,(k-o)*2) ; 
    }
    else printf("%I64d",(k*2) -1);
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