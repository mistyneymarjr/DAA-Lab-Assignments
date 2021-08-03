// Author: Monika Chauhan


// III. Given an array of nonnegative integers, design an algorithm and a program to count the number
// of pairs of integers such that their difference is equal to a given key, K.

#include<bits/stdc++.h>
using namespace std;

int binSearch(int a[],int low, int high, int key)
{

   int count=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            count++;
            break;
        }
        else if(a[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    return count;
}
void gotosearch(int a[], int n, int key)
{
    sort(a, a+n);
    int i=0;
    int c=0;
    while(i<n)
    {
        int temp=key+a[i];
       c+=binSearch(a, i, n-1, temp);
        i++;
    }
    cout<<"Pairs are:"<<c;
}


int main()
{
    int t, num, n, key;
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
            cout<<"Enter Key:";
            cin>>key;
           
        gotosearch(a, n, key);
    }
    


    return 0;
}