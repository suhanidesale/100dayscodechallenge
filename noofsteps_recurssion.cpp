#include<iostream>
using namespace std;

int noofsteps(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return noofsteps(n-1) + 1 + noofsteps(n-1);
    
}

int main()
{
    int n;
    cout<<"Enter no of stairs: "<<endl;
    cin>>n;

    cout<<noofsteps(n);

    return 0;
}