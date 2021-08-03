// Author: Monika Chauhan


// II. Given a sorted array of positive integers, design an algorithm and implement it using a program
// to find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include<bits/stdc++.h>
using namespace std;

int binSearch(int a[],int i,int j, int n)
{
    int k=-1;
    int temp= a[i]+a[j];
    int low=j;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==temp)
        {
            k=mid;
            break;
        }
        else if(a[mid]>temp)
        high=mid-1;
        else
        low=mid+1;
    }
    return k;
}
void gotosearch(int a[], int n)
{
    int i=0, j, k;
    int flag=0;
    while(i<n)
    {
        for(j=i+1; j<n; j++)
        {
           k= binSearch(a, i, j, n);
           if(a[i]+a[j]==a[k])
           {
               cout<<"Sequence at "<<i+1<<" "<<j+1<<" "<<k+1;
               flag=1;
               break;
           }
        
        }
        // to avoid unnecessary comparisons 
        if(flag)
        break;
        else
        i++;
    }
  if(!flag)
  cout<<"No sequence found";

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
           
        gotosearch(a, n);
    }
    


    return 0;
}