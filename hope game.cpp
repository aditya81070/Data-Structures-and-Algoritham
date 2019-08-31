#include<iostream>
using namespace std;
long long inf = 1000000000000000000ll;
int a[30];
long long DP[30][2];
int n;

long long solve(int idx, int allowed) {
	if(DP[idx][allowed] != -1) return DP[idx][allowed];
	long long ans = 0;
	if(idx+1<n) {
		ans = max(ans, solve(idx+1, allowed) + a[idx+1]);
	}
	if(idx+2<n) {
		ans = max(ans, solve(idx+2, allowed) + 2*a[idx+2]);
	}
	if(allowed && idx+3<n) {
		ans = max(ans, solve(idx+3, 0) + 3*a[idx+3]);
	}
//cout<<idx<<" "<<allowed<<" "<<ans<<endl;
	return DP[idx][allowed] = ans;
}

int main() {
	char comma;
	cin>>n;
	for(int i=0;i<n-1;i++) {
		cin>>a[i]>>comma;
	}
	cin>>a[n-1];
	for(int i=0;i<30;i++) {
		DP[i][0] = -1;
		DP[i][1] = -1;
	}
//	for(int i=0;i<n;i++) {
//		cout<<a[i]<<" ";
//	}
	long long ans = 0;
	if(n>0)
		ans = max(ans, solve(0,1) + a[0]);
	if(n>1)
		ans = max(ans, solve(1,1) + 2*a[1]);
	if(n>2)
		ans = max(ans, solve(2,0) + 3*a[2]);
	cout<<ans<<endl;
}


