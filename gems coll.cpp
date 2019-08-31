#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[600][600],a[600];

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        
        ll n,i,j;
        cin>>n;
        
        for(i=1;i<=n;i++)
        cin>>a[i];
        
        dp[0][0] = 0;
        dp[1][0] = a[1];
        
        ll ans = a[1];
        
        for(i=2;i<=n;i++)
        for(j=0;j<=n+5;j++)
        {
            dp[i][j] = max(dp[i][j],dp[i-1][j]);
            
            if(i>1 && dp[i-2][j]!=-1)
            dp[i][j] = max(dp[i][j],dp[i-2][j]+a[i]);
            
            if(i>1 && dp[i-2][j+1]!=-1)
            dp[i][j] = max(dp[i][j],dp[i-2][j+1]+a[i-1]+a[i]);
            
              if(i>2 && j>0 && dp[i-3][j-1]!=-1)
            {
                dp[i][j] = max(dp[i][j],dp[i-3][j-1]);
            
                if(i<n)
                {   
                    dp[i+1][j] = max(dp[i+1][j],dp[i-3][j-1]+a[i+1]);
                
                    // cout<<i+1<<"--"<<j<<"--"<<dp[i+1][j]<<"\n";
                }    
                    
            }
            
            ans = max(ans,dp[i][j]);
        }
        
        // for(i=0;i<=n;i++)
        // {
        // for(j=0;j<=n;j++)
        // cout<<dp[j][i]<<" ";
        
        // cout<<"\n";
        // }
        cout<<ans<<"\n";
    }
    return 0;
}
