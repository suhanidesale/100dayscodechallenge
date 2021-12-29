#include <iostream>
#include <vector>
using namespace std;

void printallindexes(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        cout << i << " ";
    }
    printallindexes(a, n, x, i + 1);
}

void printallindexes1(int a[], int n, int x, int i, vector<int> &ans)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        ans.push_back(i);
    }
    printallindexes1(a, n, x, i+1,ans);
}

int storeallindexes(int a[], int n, int x, int i, int output[], int fsf)
{
    if (i == n)
    {
        return 0;
    }
    if (a[i] == x)
    {
        output[fsf] = i;
        return 1 + storeallindexes(a, n, x, i + 1, output, fsf+1);
    }
    else
    {
        return storeallindexes(a, n, x, i + 1, output, fsf);
    }
    
}

int main()
{
    int a[] = {1, 4, 5, 5, 7};
   vector<int> v;

    printallindexes1(a, 5, 5, 0, v);

    for (int i = 0; i <v.size() ; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    int output[10];
    int f_count = storeallindexes(a,5,5,0,output,0);
    for (int j = 0; j < f_count ; j++)
    {
        cout<<output[j]<<" ";
    }
    
    return 0;
}