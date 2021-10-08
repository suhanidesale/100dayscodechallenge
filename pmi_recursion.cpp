#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    int smallans = factorial(n-1);
    int ans = n * smallans;

    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    
    cout<<factorial(n);

    return 0;
}