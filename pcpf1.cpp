#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i, gcd_ans;
    cout << "Enter no 1: " << endl;
    cin >> n1;
    cout << "Enter no 2: " << endl;
    cin >> n2;

    for (i = 1; i <= n1 && i <= n2; ++i)
    {

        if (n1 % i == 0 && n2 % i == 0){
            gcd_ans = i;

        }
    }

    cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<gcd_ans<<endl;
    return 0;
}
