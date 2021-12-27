#include<iostream>
using namespace std;

void printallindexes(int a[] , int n , int x, int i,int &count)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        count = count+1;
    }
    printallindexes(a,n,x,i+1,count);
    


}


int main(){
    int a[] = {1,4,5,5,7};
    int count = 0;
    printallindexes(a,5,5,1,count);
    cout<<count;

    return 0;
}