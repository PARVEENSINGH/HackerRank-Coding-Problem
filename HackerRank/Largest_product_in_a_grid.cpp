#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

//https://www.hackerrank.com/contests/projecteuler/challenges/euler011/problem

int vec[20][20];

int solve()
{
   int res=0;
    int num=4;
    int temp=1;
   for(int c=0;c<20;c++)
   {
       for(int r=0;r<20;r++)
       {
          //check horizontally to right side
           if(c<17)
           {
               for(int i=0;i<num;i++)
                   temp*=vec[r][c+i];
                res=max(res,temp); 
                temp=1;  
           }

           //checking vertically downward
           if(r<17)
           {
               for(int i=0;i<num;i++)
                    temp*=vec[r+i][c];
                res=max(res,temp);
                temp=1;    
           }

        //checking diagonally upward to right side
           if(c<17 && r>2)
           {
               for(int i=0;i<num;i++)
                  temp*=vec[r-i][c+i];
                res=max(res,temp);
                temp=1;    
           }
        
        //checking diagonally downward to right side.
            if(c<17 && r<17)
           {
               for(int i=0;i<num;i++)
                  temp*=vec[r+i][c+i];
                res=max(res,temp);
                temp=1;    
           }
       }
   }

   return res;
}

int main() 
{   
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
            cin>>vec[i][j];
    }

    cout<<solve()<<endl;
    return 0;
}
