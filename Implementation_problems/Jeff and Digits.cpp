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
    int c5 =0 , c0 = 0;
    for(int i = 0;i<n;i++){
    	int val ; cin >> val;
    	if(val == 5)c5++;
    	else c0++;
    }
    if(c0 == 0){
    	cout<<-1;
    	return;
    }
    if(c5 < 9) {
    	cout << 0 ; 
    	return;
    }
    for(int i = 1 ;i<= c5-(c5%9);i++) cout <<5;
    for(int i = 1 ; i<= c0 ; i++) cout <<0; 	
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