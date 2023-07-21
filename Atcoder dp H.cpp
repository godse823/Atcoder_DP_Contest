#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
void solve(); 
int dp[1005][1005];
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

int h,w;
    cin>>h>>w;
    char arr[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
                cin>>arr[i][j];
        }
    }
    const int MOD = 1e9+7;
    dp[0][0] = 1;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(arr[i][j]=='#'){
                dp[i][j] = 0;
            }
            else{
                if(i>0){
                    dp[i][j] = dp[i][j]+dp[i-1][j];
                }
                dp[i][j] =  dp[i][j]%MOD;
                if(j>0){
                    dp[i][j] = dp[i][j]+dp[i][j-1];
                }
                dp[i][j] = dp[i][j]%MOD;
            }
        }
    }
    cout<<dp[h-1][w-1];

//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 

