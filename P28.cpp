#include<bits/stdc++.h>

using namespace std;

// Answer: 669171001
int main()
{
    long int i,j,k,l;
    long int sum = 1;
    long int skip = 0,add = 3;
    for(i = 3; i<= 1001; i+=2)//1001; i+=2)
    {
        cout<<"Adding with skip = "<<skip<<" : ";
        skip += 2;
        //add += skip;
        //cout<<add;
        for(j=0;j<4;j++)
        {
            sum += add;
            cout<<add<<" ";
            add += skip;
        }
        add += 2;
        cout<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
