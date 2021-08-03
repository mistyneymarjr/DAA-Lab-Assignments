// Author: Monika Chauhan
#include<bits/stdc++.h>

using namespace std;

void jumpSearch(int a[],int n, int num)
{
    int steps=sqrt(n);
    
    int flag=0, swaps=0;
    
    int prev=0;
   while (a[min(steps, n)-1]<num)
   {
       swaps++;
       prev=steps;
       steps+=sqrt(n);
       if(prev>=n)
       {
           break;
       }
       
   }

   while(a[prev]<num)
   {
       prev++;
       swaps++;
        if(prev==min(steps,n))
        {
            break;
        }

    }
    if(a[prev]==num)
        {
            flag=1;

        }
    cout<<(flag?"Present    ":"Not present  ")<<swaps;
    
}
int main()
{
    int t, num, n;
    cout<<"Enter Test cases:    ";
    cin>>t;
    while(t--)
    {
            cout<<endl<<"Enter Size of Array:   ";
            cin>>n;
            int a[n];
            for(int i=0; i<n; i++)
            {
                cin>>a[i];
            }
            cout<<endl<<"Enter number to be searched: ";
            cin>>num;
        jumpSearch(a, n, num);
    }
    


    return 0;
}