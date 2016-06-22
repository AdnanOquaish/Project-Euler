#include<bits/stdc++.h>

using namespace std;

// Answer: -59231
// Took around 3000ms on an Intel i5-3210M Processor(2.50 GHz) with 6GB RAM

bool isPrime(int n)
{
    int i;
    if(n%2 == 0)
        return false;
    else if(n%3 == 0)
        return false;
    else if(n%5 == 0)
        return false;
    else if(n%7 == 0)
        return false;
    else if(n%11 == 0)
        return false;
    else if(n%13 == 0)
        return false;
    for(i=15;i<sqrt(n);i+=2)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
int gcount = 0;
void prime1000(int arr[])
{
    int i,j,k,l,m,n;
    j = 0;
    for(i=2;i<1000;i++)
    {
        if(isPrime(i)==true)
        {
            cout<<i<<endl;
            arr[j]=i;
            j++;
            gcount++;
        }
    }
    //cout<<j<<" ----------- ---------- ";
}

int main()
{
    int i,j,k,l;
    int a,b,result,n,maxPrime,currPrime,maxa,maxb,maxProduct;
    int arr[1005];
    prime1000(arr);
    maxPrime = -1;
    j = 0;
    int index = 0;
    for(j=0;j<gcount;j++)
        cout<<arr[j]<<endl;
    for(i=1;i<1000;i+=2)
    {
        for(j=0;j<gcount;j++)
        {
            for(k=-1;k<2;k+=2)
            {
                b = k*arr[j];
                a = i;
                n = 0;
                cout<<a<<" and "<<b<<" has ";
                currPrime = -1;
                do{
                    result = (n*n) + a*n + b;
                    n++;
                    currPrime++;
                }while(isPrime(result));
                cout<<currPrime<<" primes in its production."<<endl;
                if(currPrime > maxPrime)
                {
                    maxPrime = currPrime;
                    maxa=a;
                    maxb=b;
                    maxProduct = a*b;
                }
            }
        }
    }
    cout<<maxProduct<<endl;
    return 0;
}
