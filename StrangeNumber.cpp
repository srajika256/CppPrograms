#include<bits/stdc++.h>
using namespace std;
long long int prime(long long int n)
{
    long long int count = 0;
    
    for(long int i = 2;i<=sqrt(n);i++)
    {
        while(n%i == 0)
        {
            count++;
            n = n/i;
        }
    }
    
    if(n>2)
    {count++;}
    
    return count;
}

int main()
{
    int t;cin>>t;
    int x,k,y;
    while(t--)
    {
       cin>>x>>k;
       
       y = prime(x);
       
       if(k == 1)
       {cout<<1<<endl;}
      
       else if(y>=k)
       {cout<<1<<endl;}
      
       else 
       {cout<<0<<endl;}
    }
    
    
    return 0;
}
