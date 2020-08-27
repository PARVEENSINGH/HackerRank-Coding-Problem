
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define MAX 255

//https://www.hackerrank.com/contests/projecteuler/challenges/euler010/problem
ll upper_limit=1000000;
vector<ll> vec;
void solve()
{
    ll res=2;
    vec.push_back(2);
    int i=3,j=0;
    bool isprime=true;
    while(i<=upper_limit)
    {
        j=0;
        isprime=true;

        while(vec[j]*vec[j]<=i)
        {
            if(i%vec[j]==0)
            {
                isprime=false;
                break;
            }

            j++;
        }

        if(isprime)
            vec.push_back(i);
        i+=2;    
    }
}

int main() 
{
    int t;
    cin>>t;
    solve();
    while(t--)
    {
        int n;
        cin>>n;

        ll res=0;
        int i=0;
        while(vec[i]<=n)
            res+=vec[i++];

        cout<<res<<endl;
    }

    return 0;
}

