
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define MAX 255

int main() 
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        ll t=(n*(n+1))/2;
        ll square_of_sums=t*t;
        ll sum_of_squares=(n*(n+1)*(2*n+1))/6;

        cout<<square_of_sums-sum_of_squares<<endl;

    }

    return 0;
}

