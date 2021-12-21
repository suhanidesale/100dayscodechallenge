#include<iostream>
using namespace std;

int count(int n)
{
    if(n==0)
    {
        return 0;
    }

    int smallans = count(n/10);

    return smallans+1;
}

int main()
{
    cout<<count(1345);
    return 0;
}