#include<iostream>
using namespace std;

bool checkno(int a[] , int n , int x)
{
    if (n == 0)
    {
       return false;
    }

    if (a[0] == x)
    {
        return true;
    }

    return checkno(a+1 , n-1 ,x);
    
}

bool checkno2(int a[] , int n , int x)
{
    if (n == 0)
    {
       return false;
    }

    bool remarr = checkno2(a+1 , n-1 ,x);
    if (remarr)
    {
        return false;
    }
    
    if (a[0] == x)
    {
        return true;
    }
    else
    {
        return true;
    }
        
}



int main()
{
    int a[] = {1,2,3,4,5};
    if(checkno2(a,5,3))
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    return 0;
}