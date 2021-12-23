      #include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
void solve(); 
int n;
vector<vector<int>>arr;
int dp[100005][5];
int fun(int n,int size,int i){
    if(size==n){
        return 0;
    }
    if(dp[size][i]!=-1){
        return dp[size][i];
    }
    int res1;
            if(i==0){
                res1 = arr[size][i]+max(fun(n,size+1,i+1),fun(n,size+1,i+2));
                }
            else if(i==1){
                res1 = arr[size][i]+max(fun(n,size+1,i-1),fun(n,size+1,i+1));
            }
            else{
                res1 = arr[size][i]+max(fun(n,size+1,i-1),fun(n,size+1,i-2));
            }
    return dp[size][i] = res1;
}
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

    cin>>n;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<3;j++){
            int curr;
            cin>>curr;
            v.push_back(curr);
        }
    arr.push_back(v);
    }
    int r1 = fun(n,0,0);
    int r2 = fun(n,0,1);
    int r3 = fun(n,0,2);
    cout<<max({r1,r3,r2})<<endl;

//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 
