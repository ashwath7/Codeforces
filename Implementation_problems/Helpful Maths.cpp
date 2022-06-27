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
    
    // int *a = new int[n];
    string a ; cin >>a;
    int n = a.size() ; 
    int i = 0 , j = 0 , k = n-1;
    while(i<k){
        if(a[i] == '+') i++;
        if(a[j] == '+')j++;
        if(a[k]=='+')k--;
        if(a[i] == '1') swap(a[i++],a[j++]);
        else if(a[i] == '2') i++;
        else swap(a[i],a[k--]);
    }    
  cout << a;   
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