#include<bits/stdc++.h>
#define int         int64_t
#define long   ll
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
bool isPrime(int n){
	int div = 2;
    while(div <=sqrt(n)){
    	if(n%div == 0){
    		return false;
    	}
    	div++;
    }
    return true;
}
signed main(){
    ios
    int n,m;
    cin>>n>>m;
    int f;
    if(!isPrime(m) ) f =0;
    else {
    	for(int i=n+1;i<m;i++){
    		if(isPrime(i)){
    			f =0;
    			break;
    			
    	
    		}
    		else{
    			f=1;
    			

    		}
    	}
    }
    if(f==1)cout<<"YES";
    else cout<<"NO";







} 

   	


   