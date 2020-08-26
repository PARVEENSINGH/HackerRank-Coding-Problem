

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
//https://www.hackerrank.com/contests/projecteuler/challenges/euler009/problem#:~:text=Find%20maximum%20possible%20value%20of,no%20such%20Pythagorean%20triplet%20print%20.&text=The%20first%20line%20contains%20an,lines%20will%20contain%20an%20integer%20.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
         cin>>n;
    
    int a,b,c;
    ll ans=0,mul=1;

    bool found=false;
    ll temp=n*n;
    
    for(a=1;a<=n/3;a++)
    {
            b=(temp-2*a*n)/(2*n-2*a);

            c=n-a-b;
            if(a*a+b*b==c*c)
            {
                found=true;
                mul=a*b*c;
                ans=max(ans,mul);  
            }
    }

    if(!found)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
        
    
    }
	return 0;
}
