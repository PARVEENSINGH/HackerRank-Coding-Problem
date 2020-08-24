

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define MAX 255

//https://www.hackerrank.com/contests/projecteuler/challenges/euler004/problem

bool checkPalin(int n)
{
    int temp=0;
    int store=n;
    while(n)
    {
        temp=(temp)*10+n%10;
        n/=10;
    }
    return store==temp;
}
int solve(int n)
{
    int temp=0,res=0;
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {   
            temp=i*j;
            if(temp<n && checkPalin(temp))
                res=max(res,temp);
            else if(temp>=n)
                break;    
        }
    }

    return res;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<solve(n)<<endl;
    }
    return 0;
}