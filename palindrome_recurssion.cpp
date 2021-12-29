#include<iostream>
using namespace std;

bool check_palindrome(int a[] , int s , int e)
{
    if (s > e)
    {
        return true;
    }

    if (a[s] == a[e])
    {
        return check_palindrome(a, s+1 , e-1);
    }
    else
    {
        return false;
    }
        
}

int main()
{
    int a[] = {1,2,4,3,2,1};
    if (check_palindrome(a,0,5))
    {
        cout<<"It is a palindrome"<<endl;
    }
    else
    {
        cout<<"Not a palindrome"<<endl;
    }
    
    return 0;
    
}
