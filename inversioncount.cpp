#include<bits/stdc++.h>
using namespace std;

// int c=0;

int mergeboth(int a[], int temp[], int left, int mid, int right)
{
 int i, j, k;
 int inv=0;
 i=left;
 j=mid;
 k=left;

while((i<=mid - 1) &&  j<=right)
{
    if(a[i]<=a[j])
    {
        temp[k++]=a[i++];
    }
    else{
        temp[k++]=a[j++];
        inv+=mid - i;
    }
}

while(i<=mid-1)
temp[k++]=a[i++];

while(j<=right)
temp[k++]=a[j++];

for(int i=left; i<=right; i++)
a[i]=temp[i];

return inv;

}

int merge(int arr[], int i, int n)
{
    int temp[n];
    int inv=0;
    int l=i;
    int r=n-1;
    if(i<n)
    {
    int mid = (l-r+1)/2;
    inv+=merge(arr,l, mid);
    inv+=merge(arr, mid+1, r); 
    inv+=mergeboth(arr, temp, l, mid, r);
    }
    return inv;
}

int main()
{
    int n;
    cout<<"enter size of arr";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int c=merge(arr,0, n);
    cout<<"c is"<<c;
}