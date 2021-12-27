#include<iostream>
using namespace std;

void printallindexes(int a[] , int n , int x, int i)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        cout<<i<<" ";
    }
    printallindexes(a,n,x,i+1);


}


int main(){
    int a[] = {1,4,5,5,7};
    printallindexes(a,5,5,1);

    return 0;
}