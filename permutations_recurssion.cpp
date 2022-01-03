#include<iostream>
using namespace std;

void permutatios(char input[] , int i)
{
    if (input[i] == '\0')
    {
        cout<<input<<endl;
        return;
    }
    for (int j = i; input[j] != '\0'; j++)
    {
        swap(input[i] , input[j]);
        permutatios(input,i+1);
        swap(input[i] , input[j]); //to get back to original position
    }
    

}

int main()
{
    char input[] = "ABC";
    permutatios(input,0);
    return 0;

}