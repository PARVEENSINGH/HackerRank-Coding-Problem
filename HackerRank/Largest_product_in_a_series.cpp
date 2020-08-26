

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define MAX 255

//https://www.hackerrank.com/contests/projecteuler/challenges/euler008/problem

ll  solve(int n,int k)
{
    string str;
    cin>>str;

    ll mul=1,ans=0;
    for(int i =0;i<(n-k);i++)
    {
        mul=1;
        for(int j=i;j<(k+i);j++)
            mul*=(str[j]-'0');
        ans=max(ans,mul);    
    }

    return ans;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,k;
        cin >> n >> k;
        cout<<solve(n,k)<<endl;
    }
    return 0;
}