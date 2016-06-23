#include<bits/stdc++.h>

using namespace std;

// Answer: 73682

long int dp[201][10];
int value[10];

int main()
{
    long int i,j,k,l,m,n;
    value[0]=1;
    value[1]=2;
    value[2]=5;
    value[3]=10;
    value[4]=20;
    value[5]=50;
    value[6]=100;
    value[7]=200;

    for(i = 0; i < 8; i++)
    {
        dp[0][i] = 1;
    }

    for(i=1;i<201;i++)
    {
        for(j=0;j<8;j++)
        {
            if(i >= value[j])
            {
                // Using coin j;
                m = dp[i - value[j]][j];
            }
            else
            {
                // if coin j's denomination is too big for i
                m=0;
            }
            if(j > 0)
            {
                // Not using coin j;
                n = dp[i][j-1];
            }
            else
            {
                n = 0;
            }
            dp[i][j] = m+n;
            //cout<<dp[i][j]<<endl;
        }
    }
    cout<<dp[200][7];
    return 0;
}
