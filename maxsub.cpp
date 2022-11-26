#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int arr[n];
	int dp[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}int ans=-1e9;
	dp[0]=0;
	for(int i=1;i<=n;i++){
		dp[i]=max(arr[i-1],dp[i-1]+arr[i-1]);
		ans=max(ans,dp[i]);
	}
	cout<<ans;
}
