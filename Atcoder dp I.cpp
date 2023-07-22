#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
void solve(); 
double dp[3002][3002];//[index][head]
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

int n;
    cin>>n; 
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dp[0][0] = 1-arr[0];//tail at 0th index
    dp[0][1] = arr[0];//head at 0th index
    for(int i=1;i<n;i++){
        for(int j = 0;j<3000;j++){
            dp[i][j]+= (1-arr[i])*(dp[i-1][j]);
            // if tail occur : current tail prob * prob of j heads till i-1 th index;
            if(j>0){
                dp[i][j]+= arr[i]*dp[i-1][j-1];
            }
            // if head occur : prob of head * prob of j-1 heads till i-1 th index(as current  jth is also  head)
        }
    }
    double sum = 0;
    for(int i = n/2+1;i<3000;i++){// as number of heads should be greater than half
        sum+=dp[n-1][i];
    }
    cout<<setprecision(9)<<fixed;
    cout<<sum;

//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 

