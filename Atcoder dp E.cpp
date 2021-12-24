/*
#include<iostream>

#include<algorithm>

#include<vector>

#include<math.h>

#include<map>


using namespace std;

#define mod 1000000007

#define ll long long 



ll n,w, a[100009], b[100009];

ll dp[109][100009];



ll solve(int r, int idx) {

if(idx == n)

return r == 0 ? 0 : INT_MAX;


if(dp[idx][r] != -1)

	return dp[idx][r];



ll ans = solve(r, idx + 1);

if(b[idx] <= r)

	ans = min(ans, a[idx] + solve(r - b[idx], idx + 1));



return dp[idx][r] = ans;

}



int s(int v_max) {



	for(int i = v_max; i >= 0; i--) {

		if(solve(i, 0) <= w)

			return i;

	}

	return 0;

}

int main() {



cin>>n>>w;

memset(dp, -1, sizeof(dp));


int v_max = 0;



for(int i = 0; i < n; i++) {

cin>>a[i]>>b[i];

v_max += b[i];

}


cout<<s(v_max)<<endl;


}*/
      #include<bits/stdc++.h> 
using namespace std;
typedef long long  ll; 
ll dp[102][100005];
    ll wt[100],cost[100];
void solve(); 

int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

    ll n,w;
    cin>>n>>w;
     for(int i =0;i<=100;i++){
         for(int j=0;j<=100000;j++){
             dp[i][j] = 1e13;
         }
     }
    for(int i=0;i<n;i++){
        cin>>wt[i];
        cin>>cost[i];
    }
     dp[0][0] = 0;
    dp[0][cost[0]] = wt[0];
      for(int i=1;i<n;i++){
        dp[i][0] = 0;
        for(int j = 1;j<=100000;j++){
            dp[i][j] = dp[i-1][j];
            if(j>=cost[i]){
                dp[i][j] = min(wt[i]+dp[i-1][j-cost[i]],dp[i][j]);
            }
       }
    }
    
      ll ans;
    for(int i=100000;i>=0;i--){
        if(dp[n-1][i]<=w){
            ans = i;
            break;
        }
    }
 
cout<<ans<<endl;
//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 
