#include<bits/stdc++.h>
#define int         long long
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
    vector<int> a ; 
    for(int i = 0;i<n;i++){
    	int val; cin >> val;
    	a.push_back(val);
    }
 
    int min_val  = INT_MAX ; 
    int ind;
    for(int i = 0;i<n;i++){
    	if(a[i] < min_val){
    		min_val = a[i];
    		ind = i+1;
    	}
    }
    int cnt = 0;
    for(int i = 0 ; i<n;i++){
        if(min_val == a[i])cnt++;
    }
    // cout << min_val << " "<<ind << endl;
    if(cnt==1)cout << ind ;
    else cout << "Still Rozdil";
    
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