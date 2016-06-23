#include<bits/stdc++.h>

using namespace std;

//Answer: 443839

long long int pow5(long long int n)
{
    long long int m = n;
    m *= m;
    m *= m;
    m *= n;
    return m;
}

long long int findSum(long long int n)
{
    long long int i,j,k,l,m;
    m = n;
    k = 0;
    while(m>0)
    {
        j = m % 10;
        k += pow5(j);
        m /= 10;
    }
    return k;
}

int main()
{
    long long int i,j,k,l,m,n;
    k = 0;
    for(i=2;i<500000;i++)
    {
        //cout<<"working"<<endl;
        if(findSum(i) == i)
        {
            k += i;
            cout<<i<<"  "<<k<<endl;
        }
    }
    return 0;
}
