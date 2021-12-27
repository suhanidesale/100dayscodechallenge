#include<iostream>
using namespace std;

void occ(int a[] , int n , int x, int i,int count)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        count = count+1;
    }
    occ(a,n,x,i+1,count);
    
}

int occ(int a[] , int n , int x, int i)
{

    if (i == n)
    {
        return 0;
    }
    
    if (a[i] == x)
    {
       return 1 + occ(a,n,x,i+1);
    }
    else
    {
        return occ(a,n,x,i+1);
    }
    
    
}


int main(){
    int a[] = {1,4,5,5,7};
    // int count = 0;
    // occ(a,5,5,1,count);
    // cout<<count;

    cout<<occ(a,5,5,0);

    return 0;
}