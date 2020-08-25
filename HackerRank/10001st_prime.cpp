
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

//https://www.hackerrank.com/contests/projecteuler/challenges/euler007/problem

void getPrime(int upper_limit,vector<int> &list)
{
   
    list.push_back(2);

    int i=3,s=0,count=1;
    bool isprime=true;

    while(count<upper_limit)
    {
        s=0;
        isprime=true;
        //Approach used if a number is not divisible by any of the prime number
        //less than it. Then the number is itself is prime.
         for(int j=2;j*j<=i;j++)
         {
             if(i%j==0)
            {
                isprime=false;
                break;
            }
         }
        if(isprime)
        {
             list.push_back(i);
             count++;
        }
           
        i+=2;    
    }
}

int main(){

    int t;
    cin>>t;

    vector<int> list;
    getPrime(10000,list);

    while(t--)
    {
        int n;
        cin>>n;

        cout<<list[n-1]<<endl;

    }
    
    return 0;
}