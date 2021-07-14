// author: Monika Chauhan
#include<bits/stdc++.h>

using namespace std;
void  linearSearch(int a[],int n, int x)
{   
    int comp=0;
    bool count=true;
    for(int i=0; i<n; i++)
    {   
        comp++;
        if(a[i]==x)
        {
        cout<<endl<<"Element found at index: "<<i<<endl<<"Total no of comparisons:  "<<comp;
        count=false;
        break;
        }
        
    }
    if(count)
    cout<<"Number is not present.";
   
}
int main()
{
    int n, t, x;
    cout<<"Enter Number of Test Cases:  ";
    cin>>t;
  
    while (t--)
    {
            cout<<endl<<"Enter Size of Array:   ";
            cin>>n;
            int a[n];
            for(int i=0; i<n; i++)
            {
                cin>>a[i];
            }
            cout<<endl<<"Enter number to be searched: ";
            cin>>x;
        linearSearch(a, n, x);
    }
    


    return 0;
}
