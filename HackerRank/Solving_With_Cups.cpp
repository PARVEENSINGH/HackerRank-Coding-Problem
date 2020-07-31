
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define MAX 255

int main() 
{
    ll n,m,s,q,a,b,res=0;
    cin>>n>>m>>s>>q;

    ll ball[m+1]={0};
    vector<int> vec(n+1,0);
    cout<<vec.max_size()<<endl;
    for(ll i=1;i<=m;i++)
    {
        cin>>ball[i];
        vec[ball[i]]=1;
    }

    while(s--)
    {
        cin>>a>>b;
        swap(vec[a],vec[b]);
    }

    while(q--)
    {
        cin>>a>>b;
        res=0;
        for(ll i=a;i<=b;i++)
            res+=vec[i];
          cout<<res<<" ";  
    }
       
    return 0;
}

