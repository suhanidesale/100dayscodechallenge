#include<iostream>
using namespace std;

void printndesc(int n)
{
    if(n == 0)
    {
        return;
    }

    //Recursvie function
   cout<<n<<endl;
   printndesc(n-1);

}

void printnasec(int n)
{
    if(n == 0)
    {
        return;
    }

    //Recursvie function
   printnasec(n-1);
   cout<<n<<endl;

}

int main()
{
    cout<<"Asecending"<<endl;
    printnasec(10);
    cout<<"Descending"<<endl;
    printndesc(10);

    return 0;
}

    