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
    int a[3][3];
    int b[3][3] = {0};
    for(int i = 0 ;i<3;i++){
    	for(int j = 0 ;j<3;j++){
    		cin >> a[i][j];
    	}
    }
  
  
    if((a[0][0] + a[0][1] + a[1][0])%2 == 0) b[0][0] = 1;
    if((a[0][1] + a[0][0] + a[1][1]+a[0][2])%2==0) b[0][1] = 1;
    if((a[0][2]+a[0][1]+a[1][2])%2==0) b[0][2] = 1;
    if((a[1][0]+a[0][0]+a[1][1]+a[2][0])%2==0) b[1][0] = 1;
    if((a[1][1]+a[1][0]+a[1][2]+a[0][1]+a[2][1])%2==0) b[1][1] = 1;
    if((a[1][2]+a[1][1]+a[0][2]+a[2][2])%2==0) b[1][2] = 1;
    if((a[2][0]+a[1][0]+a[2][1])%2==0) b[2][0] = 1;
    if((a[2][1]+a[2][0]+a[2][2]+a[1][1])%2==0) b[2][1] = 1;
    if((a[2][2]+a[2][1]+a[1][2])%2==0) b[2][2] = 1;
    
      for(int i = 0 ;i<3;i++){
        for(int j = 0 ;j<3;j++){
            cout << b[i][j];
        }
        cout << endl;
    }
        
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