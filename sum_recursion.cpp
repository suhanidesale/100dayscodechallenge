#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    int smallans = sum(n/10);
    int last_digit = n%10;

    return smallans+ last_digit;
}

int main()
{
    cout<<sum(1345);
    return 0;
}
