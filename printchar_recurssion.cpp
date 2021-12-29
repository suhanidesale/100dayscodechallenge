#include<iostream>
using namespace std;

void print(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    cout<<input[0];
    print(input+1);
}

void printreverse(char input[] , int n)
{
    if (input[n-1] == '\0')
    {
        return;
    }
    cout<<input[n-1];
    print(input+1);
}


int main()
{
    char input[] = "abc";
    print(input);
    cout<<endl;
    printreverse(input,3);
    return 0;
}