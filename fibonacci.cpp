#include<iostream>
using namespace std;

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    int smallinput1 = fib(n-1);
    int smallinput2 = fib(n-2);

    return smallinput1 + smallinput2;
}

int main()
{
    int n;
    cout<<"Enter the nth number: "<<endl;
    cin>>n;

    cout<<fib(n);

    return 0;
}