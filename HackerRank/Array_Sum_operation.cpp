
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define MAX 255

int main() 
{
    ll n,m;
    cin>>n>>m;
    ll  sum=n*(n+1)/2;
    ll op[m];
    vector<ll> res;

    for(ll i=0;i<m;i++)
         cin>>op[i];

    for(ll i=0;i<n;i++)
        res.push_back(i+1);  
    
    for(ll i=0;i<m;i++)
    {
        if((op[i]<n && op[i]>1) || (op[i]==res[0] || op[i]==res[n-1]))
        {
            swap(res[0],res[n-1]);
            cout<<sum<<endl;
            continue;
        }
        else 
        {
            sum=sum-res[n-1]+op[i];
             res[n-1]=op[i];
            cout<<sum<<endl;
        }
    }
       
    return 0;
}

