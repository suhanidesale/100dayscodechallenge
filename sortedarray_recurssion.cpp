#include<iostream>
using namespace std;

bool sortedarray(int a[] , int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }

    bool smallsorted = sortedarray(a+1,n-1);
    return smallsorted;
    
}

bool sortedarray2(int a[] , int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    bool smallsorted = sortedarray(a+1,n-1);
    if (!smallsorted)
    {
        return false;
    }
    
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

bool sortedarray3(int a[] , int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (a[n-2] > a[n-1])
    {
        return false;
    }

    bool smallsorted = sortedarray(a,n-1);
    return smallsorted;
}

int main()
{
    int a[] = {1,2,3,4,5};
    // if(sortedarray(a,5))
    // {
    //     cout<<"sorted"<<endl;
    // }
    // else
    // {
    //     cout<<"not sorted"<<endl;
    // }
    
    // if(sortedarray2(a,5))
    // {
    //     cout<<"sorted"<<endl;
    // }
    // else
    // {
    //     cout<<"not sorted"<<endl;
    // }

    if(sortedarray3(a,5))
    {
        cout<<"sorted"<<endl;
    }
    else
    {
        cout<<"not sorted"<<endl;
    }
    

    return 0;

}