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
bool is_prime(int n){
	int div = 2;
    while(div <=sqrt(n)){
    	if(n%div == 0){
    		return false;
    	}
    	div++;
    }
    return true;
}
void solve(){
    int n ,  m  ; cin >> n >> m;
    int prime[50];
    int j = 0;
    bool nxt_prime = false;
    for(int i = 2 ; i<=50 ; i++){
        if(is_prime(i)) prime[j++] = i;
    }
    for(int i = 0 ; i<j-1;i++){
        if(prime[i] == n && prime[i+1] == m) {
            nxt_prime = true;
            break;
        }else nxt_prime = false;
    }
    if(nxt_prime) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    // for(int i = 0 ;i<j ; i++){
    //     cout << prime[i] << " ";
    // }
 
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