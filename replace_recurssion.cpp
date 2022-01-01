#include<iostream>
using namespace std;

void replace(char a[])
{

    if (a[0] == '\0')
    {
        return;
    }
    
    if (a[0] == 'a')
    {
       a[0] = 'x';
    }

    replace(a+1);
    
}

int main()
{
    char a[10];
    cin>>a;
    cout<<a<<endl;
    replace(a);
    cout<<a<<endl;

    return 0;

}