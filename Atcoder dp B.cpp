      #include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
void solve(); 
vector<ll>dp;
ll fun(vector<ll>&arr,ll n,ll k,ll idx){
    if(idx==n-1){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    ll minval = 1e9+5;
    for(ll i=1;i<=k ;i++){
        if(idx+i<n)
             minval = min(minval,abs(arr[idx+i]-arr[idx])+fun(arr,n,k,idx+i));
    }
    
    return dp[idx] = minval;
}
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 



ll n,k;
cin>>n>>k;
vector<ll>arr(n);
for(ll i=0;i<n;i++){
	cin>>arr[i];
}
    dp.resize(n+1,-1);
cout<<fun(arr,n,k,0)<<endl;

//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 
