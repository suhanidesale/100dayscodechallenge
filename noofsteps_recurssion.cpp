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


void printsteps(int n , char s , char d , char h)
{
    if (n == 0)
    {
        return;
    }

    printsteps(n-1,s,h,d);
    cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
    printsteps(n-1,h,d,s);
}


int main()
{
    int n;
    cout<<"Enter no of stairs: "<<endl;
    cin>>n;

    cout<<noofsteps(n)<<endl;
    printsteps(n,'a','b','c');

    return 0;
}