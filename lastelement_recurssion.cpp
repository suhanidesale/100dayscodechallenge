#include<iostream>
using namespace std;

int lastelement(int a[] , int n , int x , int i )
{
    if (i == -1)
    {
        return -3;
    }

    if (a[i] == x)
    {
        return i;
    }
    return lastelement(a,n,x,i-1);
   
}

int lastelement2(int a[] , int n , int x)
{
    if (n == 0)
    {
        return -3;
    }

    if (a[n-1] == x)
    {
        return n-1;
    }
    return lastelement(a,n-1,x);
   
}



int main()
{
    int a[] = {1,3,3,4,5};
    cout<<lastelement2(a,5,4);
    return 0;

}