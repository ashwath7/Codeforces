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
    vector<int> arr;
    int a = 0 , b = 1;
    arr.push_back(a) ; 
    arr.push_back(b); 
    // cout << a << " "<<b << " ";
    int fib = 0;

    while(fib<n ){
        fib = a + b;
        a= b ;
        b = fib;
        arr.push_back(fib);
    } 
    int i = 0 , j = 0 , k = arr.size() - 1;
    while(j < k){
        if(arr[i] + arr[j] + arr[k] > n) k--;
        else if(arr[i] + arr[j] +arr[k] <n ){
            i++;
            j++;
        }
        else {
            cout << arr[i] << " "<<arr[j] <<" "<<arr[k];
            return;
        }
    }
    if(n == 0) cout <<0<<" "<<0<<" "<<0;
    // else if(n==1) cout << 1<<" "<<0<<" "<<0;
    else cout <<"I'm too stupid to solve this problem";
    
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