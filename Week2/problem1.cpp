// Author: Monika Chauhan


// I. Given a sorted array of positive integers containing few duplicate elements, design an algorithm
// and implement it using a program to find whether the given key element is present in the array
// or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))


#include<bits/stdc++.h>
using namespace std;

void binSearch(int a[], int n, int num)
{
    int low=0;
    int high=n-1;
    int ll=0; int ul=0;
    while (low <= high)
    {
        int mid =(low + high)/2;
        if (num < a[mid])
        {
            high = mid - 1;
        }
        else if (num > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 or a[mid - 1] != num)
            {
                ll=mid;
                break;
            }
            else
                high = mid - 1;
        }
    }
    if(a[ll]!=num)
    {
    cout<<"No is not Present";
    return;
    }
   
    high = n-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (num < a[mid])
        {
            high = mid - 1;
        }
        else if (num > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 9 or a[mid + 1] != num)
            {
                ul=mid;
                break;
            }
            else
                low = mid + 1;
        }
    }
    cout<<"No of Copies :"<<ul-ll +1;

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
        binSearch(a, n, num);
    }
    


    return 0;
}