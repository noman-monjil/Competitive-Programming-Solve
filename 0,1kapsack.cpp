#include<bits/stdc++.h>
using namespace std;
knapsack(int weight[],int value[],int n,int capacity)
{
    int dp[n+1][capacity+1];
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=capacity;w++)
        {
            if(i==0 or w==0)
            {
              dp[i][w]=0;
            }else if(weight[i-1]<=w){

                dp[i][w]=max(value[i-1]+dp[i-1][w-weight[i-1]],dp[i-1][w]);
            }else dp[i][w]=dp[i-1][w];
        }

    }
    return dp[n][capacity];

}


int main()
{
    int value[]={60,100,120};
    int weight[]={10,20,30};
    int capacity=50;
    int n= sizeof(value)/sizeof(value[0]);
    cout<<"maximum value is = "<<knapsack( weight, value,n,capacity);
}
