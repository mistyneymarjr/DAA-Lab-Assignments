// Author: Monika Chauhan
#include<bits/stdc++.h>

using namespace std;
void binarySearch(int arr[], int l, int r, int x, int swaps)
{
    int flag=0;
    while (r >= l)
    {
        int mid = l + (r - l)/2;
        swaps++;
        if (arr[mid] == x)
        {
            flag=1;
            break;
        }
 
        if (arr[mid] > x)
        {
        swaps++;
        r = mid - 1;
        }
        else
        {
        swaps++;
        l = mid + 1;
        }
    }
    cout<<(flag?"Present    ":"Not present  ")<<swaps;
    

}

void expSearch(int a[],int n, int num)
{
    int steps=sqrt(n);
    
    int flag=0, swaps=0;
    if (a[0] == num)
    {
        flag=1;
        cout<<(flag?"Present    ":"Not present  ")<<swaps;
        return;
    }
    // Find range for binary search by doubling
    int i = 1;
    while (i < n && a[i] <= num)
    {
    i = i*2;
    swaps++;
    }
    //  Start binary search.
    return binarySearch(a, i/2,min(i, n-1), num, swaps);
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
        expSearch(a, n, num);
    }
    


    return 0;
}