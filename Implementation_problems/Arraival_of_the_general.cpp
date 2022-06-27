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
    int n ; cin >> n ; 
    int a[n] ; 
    for(int i = 0; i< n;i ++) cin >> a[i];
    int max_ind , min_ind , max_ele  = INT_MIN, min_ele = INT_MAX;
    for(int i = 0; i < n; i++){
    	if(a[i] > max_ele) {
    		max_ele = a[i];
    		max_ind = i;
    	}
    	if(a[i] <= min_ele){
    		min_ele = a[i];
    		min_ind = i;
    	}
    } 	
    if(max_ind < min_ind) cout << max_ind + ((n-1) - min_ind);
    else cout << max_ind + ((n-1) - (min_ind + 1));
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