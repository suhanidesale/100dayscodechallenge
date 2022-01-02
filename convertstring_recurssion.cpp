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

int convertstring(char input[] , int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallans = convertstring(input , n-1);
    int lastdigit = input[n-1] - '0';
    int ans = smallans*10 + lastdigit;

    return ans;
    

}

int main()
{
    char input[] = "12345";
    int n = countchar(input);

    int a = convertstring(input,n);
    cout<<a;

    return 0;
    
}