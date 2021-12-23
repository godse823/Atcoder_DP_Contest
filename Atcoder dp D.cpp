      #include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
void solve(); 
ll fun(int n ,int w,int wt[],int cost[]){
    vector<vector<ll>>dp(n+1,vector<ll>(w+1,0));
    for(int i=1;i<n+1;i++){
        for(int j = 1;j<w+1;j++){
            if(wt[i-1]<=j){
                dp[i][j] = max(cost[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
return dp[n][w];
}
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

    int n,w;
    cin>>n>>w;
    int wt[n],cost[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
        cin>>cost[i];
    }
    cout<<fun(n,w,wt,cost)<<endl;;
 

//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 
