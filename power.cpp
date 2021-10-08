#include<iostream>
#include<math.h>
using namespace std;

int power(int n , int x)
{
    if( n == 0)
    {
        return 1;
    }

    int smalloutput = pow(x,n-1);
    return x * smalloutput ;
}

int main()
{
    int x , n;
    cout<<"Enter the number: "<<endl;
    cin>>x;

    cout<<"Enter the power: "<<endl;
    cin>>n;

    cout<<power(n,x);

    return 0;

}