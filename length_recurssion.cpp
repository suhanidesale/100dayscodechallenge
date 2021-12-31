#include<iostream>
using namespace std;

int countchar(char input[])
{
    if (input[0] == '\0')
    {
        return 0;
    }
    //int smalllength = countchar(input+1);
    return 1 +  countchar(input+1);
}

int main()
{
    char input[] = "suhani";
    cout<<countchar(input);

    return 0;
}