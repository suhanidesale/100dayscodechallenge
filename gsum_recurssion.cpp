#include<iostream>
#include<math.h>
using namespace std;


double gsum(int k)
{
    if (k == 0)
    {
        return 1;
    }

    double smallans = gsum(k-1);

    return smallans+1.0/pow(2,k);
    
}

int main()
{
    cout<<gsum(2);
    return 0;
}