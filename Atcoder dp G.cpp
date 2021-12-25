      #include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
void solve();
int n,m;
vector<int>adj[100005];
vector<int>dp;
int fun(int idx){  
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int ans = 0;
    for(auto it:adj[idx]){
         ans =  max(ans,1+fun(it));
    }
    return dp[idx] = ans;
}
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    dp.resize(n+1,-1);
    int ans  =INT_MIN;
    for(int i=1;i<=n;i++){
        int curr = fun(i);
    //    cout<<curr<<" ";
        ans = max(ans,curr);
    }
    cout<<ans<<endl;

//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 
