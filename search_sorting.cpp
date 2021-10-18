#include<iostream>
#include<limits.h>
using namespace std;

void searchsort(int n,int a[])
{
    for (int i = 0; i <= n-2; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n-1; j++)
        {
           if (a[j] < a[smallest])
           {
               smallest = j;
           }
           
        }
        
        swap(a[i],a[smallest]);
    }
    
 }

int main()
{
    int n,a[n];
    cout<<"Enter no of elements: "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    searchsort(n,a);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;

}