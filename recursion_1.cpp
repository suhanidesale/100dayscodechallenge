#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    
    if(n == 0)
    {
        return 1;
    }

    int fact = n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;

    return 0;
}