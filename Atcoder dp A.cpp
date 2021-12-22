      #include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
void solve(); 
int fun(vector<int>&arr,int n){
	vector<int>dp(n+2,0);
	dp[0] = 0;
	dp[1] = 0;
	dp[2] =  arr[1]-arr[0];
	for(int i=3;i<n;i++){
		dp[i] = min(dp[i-2]+abs(arr[i]-arr[i-2]),dp[i-1]+abs(arr[i]-arr[i-1]));
	}
return dp[n-1];
}
int main(){ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout); 
#endif 

int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
	cin>>arr[i];
}

cout<<fun(arr,n)<<endl;



cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 
