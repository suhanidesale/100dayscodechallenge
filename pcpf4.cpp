#include <iostream>
using namespace std;

int main()
{
    int n, m = 1;
    cout<<"Enter the number of columns"<<endl;//taking input as no of columns
    cin>>n;
    for (int i = 1; i <= n; i++) //loop for printing 1st half  
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}