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
    int n ; cin >> n;
    int a[n][3];
    for(int i = 0 ; i< n;i++){
    	for(int j = 0 ;j<3;j++){
    		cin >> a[i][j];
    	}
    }
    bool is_eq = true;
    for(int i = 0 ; i<3;i++){
    	int s = 0;
    	for(int j = 0 ; j<n;j++){
    		s+=a[j][i];
            // cout << s << " ";
    	}
    	if(s!=0) {
    		is_eq = false;
    		break;
    	}
    }
    if(is_eq) cout << "YES" << endl;
    else cout << "NO";
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