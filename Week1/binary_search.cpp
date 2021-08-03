// author: Monika Chauhan
#include<bits/stdc++.h>

using namespace std;
void binarySearch(int a[],int n, int num)
{
    int low=0;
    int high=n;
    int c=1, swaps=0;
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {   
        
        if (low<high)
        {
            ++swaps;
            int mid=(low+high)/2;
            if(num==a[mid])
            {
                cout<<"Number is present. "<<endl<<"Swaps are:   "<<swaps+1;;
                c=0;
                break;
            }
            else if(num < a[mid])
            high=mid-1;

            else
            low=mid+1;

        }
    }
    if(c)
    cout<<"Number is not present."<<endl<<"Swaps are:   "<<swaps;
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
        binarySearch(a, n, num);
    }
    


    return 0;
}